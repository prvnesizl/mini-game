#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <chrono>

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

class Player {
    //public
};

class Item {
    //public
};

class Enemy { //водоросли

};

class Ivent {

}

int main() {
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Ќе поймай опасность");
    Player player;
    std::vector<Item> items;
    std::vector<Enemy> enemies;
    int score = 0;
    bool gameOver = false;
    sf::Texture fish_tex;
    fish_tex.loadFromFile("рыба.png");
    sf::Texture setka_tex;
    fish_tex.loadFromFile("сетка.png");
    sf::Sprite fish;
    fish.setTexture(fish_tex);
    fish.setPosition(400, 500);
    std::vector<sf::Sprite> rain;
    while (window.isOpen()) {
        Ivent iv;
        sf::Vector2i mouse_pos = sf::Mouse.getPosition(window);

        if (rand() % 100 < 2) { // 0,02 шанс на водорсль
            items.emplace_back();
        }
        if (rand() % 100 < 1) { // 0,01 шанс на сетку
            sf::Sprite setka;
            setka.setTexture(setka_tex);
            setka.setPosition(rand() % 800, 0);
            rain.push_back(setka);
        }
        for (int i = 0; i < rain.size(); i++) {
            sf::Sprite setka2 = rain[i];
            setka2.setPosition(setka2.getPosition().x, setka2.getPosition().y - 10);
        }
        fish.setPosition(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y));
    }
    return 0;
}
