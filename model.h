#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QVector>
#include <QPair>

class Model : public QObject
{
    Q_OBJECT
public:
    explicit Model(QGraphicsView *view, QObject *parent = nullptr);

    void fishUp();
    void fishDown();
    void fishLeft();
    void fishRight();
    void restart();

private:
    QGraphicsView *view{};
    QGraphicsScene *scene{};

    const int rectSideSize = 40;
    const int pFieldSideSize = 800;

    QPair<short, short> coorFish{};

    const int vStep = 40;

    QList<QPair<int, int>> clearRects{};

    QGraphicsPixmapItem *fish{};

    void finish();
signals:

};

#endif // MODEL_H
