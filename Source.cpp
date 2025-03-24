#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

class Button {
public:
    sf::RectangleShape shape;
    sf::Text label;

    Button(const std::string& text, sf::Font& font, sf::Vector2f position, sf::Vector2f size) {
        shape.setSize(size);
        shape.setFillColor(sf::Color::Transparent);
        shape.setOutlineColor(sf::Color::White);
        shape.setOutlineThickness(2);
        shape.setPosition(position);

        label.setFont(font);
        label.setString(text);
        label.setCharacterSize(24);
        label.setFillColor(sf::Color::White);
        label.setPosition(position.x + 10, position.y + 10);
    }

    bool isMouseOver(const sf::RenderWindow& window) const {
        sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));
        return shape.getGlobalBounds().contains(mousePosition);
    }

    void draw(sf::RenderWindow& window) const {
        window.draw(shape);
        window.draw(label);
    }
};

class Fish {
public:
    sf::Sprite sprite;
    Fish(const sf::Texture& texture) {
        sprite.setTexture(texture);
        sprite.setScale(0.05f, 0.05f);
    }
    void setPosition(float x, float y) {
        sprite.setPosition(x - sprite.getGlobalBounds().width / 2, y - sprite.getGlobalBounds().height / 2);
    }
};

class Net {
public:
    sf::Sprite sprite;
    float verticalSpeed;

    Net(const sf::Texture& texture, float x, float speed) : verticalSpeed(speed) {
        sprite.setTexture(texture);
        sprite.setScale(0.07f, 0.07f);
        sprite.setPosition(x, 0);
    }

    void move() {
        sprite.move(0.0f, verticalSpeed);
    }

    bool isOffScreen() const {
        return sprite.getPosition().y > WINDOW_HEIGHT;
    }

    bool isColliding(const sf::Sprite& other) const {
        return other.getGlobalBounds().intersects(sprite.getGlobalBounds());
    }
};

class Seaweed {
public:
    sf::Sprite sprite;
    float verticalSpeed;
    Seaweed(const sf::Texture& texture, float x, float speed) : verticalSpeed(speed) {
        sprite.setTexture(texture);
        sprite.setScale(0.05f, 0.05f);
        sprite.setPosition(x, 0);
    }
    void move() {
        sprite.move(0.0f, verticalSpeed);
    }
    bool isOffScreen() const {
        return sprite.getPosition().y > WINDOW_HEIGHT;
    }
    bool isColliding(const sf::Sprite& other) const {
        return other.getGlobalBounds().intersects(sprite.getGlobalBounds());
    }
};

enum class GameState {
    MENU,
    PLAYING,
    GAME_OVER,
    VICTORY
};

void spawnNet(std::vector<Net>& nets, const sf::Texture& texture) {
    if (rand() % 100 < 2) {
        nets.emplace_back(texture, static_cast<float>(rand() % WINDOW_WIDTH), 3.0f);
    }
}

void spawnSeaweed(std::vector<Seaweed>& seaweeds, const sf::Texture& texture) {
    if (rand() % 100 < 2) {
        seaweeds.emplace_back(texture, static_cast<float>(rand() % WINDOW_WIDTH), 2.5f);
    }
}

void runGame(sf::RenderWindow& window, GameState& currentState, int& score) {
    sf::Texture fishTexture, seaweedTexture, netTexture;
    if (!fishTexture.loadFromFile("rb.png") ||
        !seaweedTexture.loadFromFile("vd.png") ||
        !netTexture.loadFromFile("stk.png")) {
        std::cerr << "картинки не загрузились" << std::endl;
        return;
    }

    Fish playerFish(fishTexture);
    std::vector<Net> nets;
    std::vector<Seaweed> seaweeds;

    score = 0;
    sf::Clock gameOverTimer;

    while (window.isOpen() && currentState == GameState::PLAYING) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
        playerFish.setPosition(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y));

        spawnNet(nets, netTexture);
        spawnSeaweed(seaweeds, seaweedTexture);

        for (auto& net : nets) {
            net.move();
        }
        for (auto& seaweed : seaweeds) {
            seaweed.move();
        }

        // проверка на столкновение
        for (const auto& net : nets) {
            if (net.isColliding(playerFish.sprite)) {
                currentState = GameState::GAME_OVER;
                gameOverTimer.restart();
            }
        }

        // проверка на победу и счетчтк очков
        for (auto it = seaweeds.begin(); it != seaweeds.end();) {
            if (it->isColliding(playerFish.sprite)) {
                score += 1;
                it = seaweeds.erase(it);
                if (score >= 30) {
                    currentState = GameState::VICTORY;
                    gameOverTimer.restart();
                }
            }
            else {
                ++it;
            }
        }

        // если вне экрана - удаляем
        nets.erase(std::remove_if(nets.begin(), nets.end(), [](const Net& net) {
            return net.isOffScreen();
            }), nets.end());

        seaweeds.erase(std::remove_if(seaweeds.begin(), seaweeds.end(), [](const Seaweed& seaweed) {
            return seaweed.isOffScreen();
            }), seaweeds.end());

        // создаем фон
        window.clear(sf::Color(0, 55, 135));
        window.draw(playerFish.sprite);

        for (const auto& net : nets) {
            window.draw(net.sprite);
        }
        for (const auto& seaweed : seaweeds) {
            window.draw(seaweed.sprite);
        }
        sf::Font font;
        if (!font.loadFromFile("Arial.ttf")) {
            std::cerr << "шрифт не загрузился" << std::endl;
            return;
        }

        sf::Text scoreText("Seaweed eaten: " + std::to_string(score), font, 24);
        scoreText.setFillColor(sf::Color::White);
        scoreText.setPosition(50, 20);
        window.draw(scoreText);

        if (currentState == GameState::GAME_OVER || currentState == GameState::VICTORY) {
            sf::Text resultText;
            resultText.setFont(font);
            resultText.setCharacterSize(50);
            resultText.setPosition(170, 250);
            if (currentState == GameState::GAME_OVER) {
                resultText.setFillColor(sf::Color::Red);
                resultText.setString("Game Over! Score: " + std::to_string(score));
            }
            else if (currentState == GameState::VICTORY) {
                resultText.setFillColor(sf::Color::Green);
                resultText.setString("You Win! Score: " + std::to_string(score));
            }
            window.draw(resultText);
            window.display();

            sf::Clock waitTimer;
            while (waitTimer.getElapsedTime().asSeconds() < 3) {
                // ждем три секунды
            }

            currentState = GameState::MENU;
            return;
        }
        window.display();
    }
}

int main() {
    srand(static_cast<unsigned>(time(0)));
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Fish Game");
    window.setFramerateLimit(60);
    sf::Font font;
    if (!font.loadFromFile("Arial.ttf")) {
        std::cerr << "Failed to load font" << std::endl;
        return -1;
    }
    Button playButton("Eat Seaweed", font, sf::Vector2f(250, 200), sf::Vector2f(300, 50));
    Button mazeButton("Find the Fish", font, sf::Vector2f(250, 300), sf::Vector2f(300, 50));
    Button crabButton("Crab Questions", font, sf::Vector2f(250, 400), sf::Vector2f(300, 50));
    GameState currentState = GameState::MENU;
    int score = 0;
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (currentState == GameState::MENU) {
                if (event.type == sf::Event::MouseButtonPressed) {
                    if (playButton.isMouseOver(window)) {
                        currentState = GameState::PLAYING;
                    }
                    else if (mazeButton.isMouseOver(window)) {
                        system("C:\\Users\\local_user\\source\\repos\\maze\\build\\Desktop_Qt_6_8_2_shared_MinGW_w64_MINGW64_MSYS2-Release\\maze.exe");
                    }
                    else if (crabButton.isMouseOver(window)) {
                        system("C:\\Users\\local_user\\source\\repos\\Крабик\\x64\\Release\\Крабик.exe");
                    }
                }
            }
        }

        window.clear(sf::Color(0, 55, 135));

        if (currentState == GameState::MENU) {
            playButton.draw(window);
            mazeButton.draw(window);
            crabButton.draw(window);
        }
        else if (currentState == GameState::PLAYING) {
            runGame(window, currentState, score);
        }
        window.display();
    }
    return 0;
}