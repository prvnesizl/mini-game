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

private:
    QGraphicsView *view{};
    QGraphicsScene *scene{};

    const int rectSideSize = 40;
    const int pFieldSideSize = 800;

    QPair<short, short> coorFish{};

    const int vStep = 80;

    QVector<QPair<short, short>> coorMatrix =
    {{vStep, 40}, {vStep, 80}, {vStep,120}, {vStep,160},{vStep,240},{vStep, 280}, {vStep,320}, {vStep,360}, {vStep,400},
    {vStep, 440}, {vStep, 480}, {vStep,520}, {vStep,560}, {vStep,600},{vStep,640},{vStep, 680}, {vStep,720}, {vStep,760},
    {vStep*2, 40}, {vStep*2,80}, {vStep*2,120}, {vStep*2,160},{vStep*2,200},{vStep*2,240},{vStep*2, 280}, {vStep*2,320}, {vStep*2,360}, {vStep*2,400},
    {vStep*2,440},{vStep*2, 480}, {vStep*2,520}, {vStep*2,600},{vStep*2,640},{vStep*2, 680}, {vStep*2,720}, {vStep*2,760},
    {vStep*3, 40}, {vStep*3,80}, {vStep*3,120}, {vStep*3,160},{vStep*3,240},{vStep*3, 280}, {vStep*3,320}, {vStep*3,360}, {vStep*3,400},
    {vStep*3,440},{vStep*3, 480}, {vStep*3,520}, {vStep*3,560}, {vStep*3,600},{vStep*3,640},{vStep*3, 680}, {vStep*3,720}, {vStep*3,760},
    {vStep*4, 40}, {vStep*4,80}, {vStep*4,120}, {vStep*4,160},{vStep*4,240},{vStep*4, 280}, {vStep*4,320}, {vStep*4,360}, {vStep*4,400},
    {vStep*4,440},{vStep*4, 480}, {vStep*4,520}, {vStep*4,560}, {vStep*4,600},{vStep*4,640},{vStep*4, 680}, {vStep*4,720}, {vStep*4,760},
    {vStep*5, 40}, {vStep*5,80}, {vStep*5,120}, {vStep*5,160},{vStep*5,240},{vStep*5, 280}, {vStep*5,320}, {vStep*5,360}, {vStep*5,400},
    {vStep*5,440},{vStep*5, 480}, {vStep*5,520}, {vStep*5,560}, {vStep*5,600},{vStep*5,640},{vStep*5, 680}, {vStep*5,720}, {vStep*5,760},
    {vStep*6, 40}, {vStep*6,80}, {vStep*6,120}, {vStep*6,160},{vStep*6,240},{vStep*6, 280}, {vStep*6,320}, {vStep*6,360}, {vStep*6,400},
    {vStep*6,440},{vStep*6, 480}, {vStep*6,520}, {vStep*6,560}, {vStep*6,600},{vStep*6,640},{vStep*6, 680}, {vStep*6,720}, {vStep*6,760},
    {vStep*7, 40}, {vStep*7,80}, {vStep*7,120}, {vStep*7,160},{vStep*7,240},{vStep*7, 280}, {vStep*7,320}, {vStep*7,360}, {vStep*7,400},
    {vStep*7,440},{vStep*7, 480}, {vStep*7,520}, {vStep*7,560}, {vStep*7,600},{vStep*7,640},{vStep*7, 680}, {vStep*7,720}, {vStep*7,760},
     {vStep*8, 40}, {vStep*8,80}, {vStep*8,120}, {vStep*8,160},{vStep*8,240},{vStep*8, 280}, {vStep*8,320}, {vStep*8,360}, {vStep*8,400},
     {vStep*8,440},{vStep*8, 480}, {vStep*8,520}, {vStep*8,560}, {vStep*8,600},{vStep*8,640},{vStep*8, 680}, {vStep*8,720}, {vStep*8,760},
     {vStep*9, 40}, {vStep*9,80}, {vStep*9,120}, {vStep*9,160},{vStep*9,240},{vStep*9, 280}, {vStep*9,320}, {vStep*9,360}, {vStep*9,400},
     {vStep*9,440},{vStep*9, 480}, {vStep*9,520}, {vStep*9,560}, {vStep*9,600},{vStep*9,640},{vStep*9, 680}, {vStep*9,720}, {vStep*9,760},};

    QGraphicsPixmapItem *fish{};

signals:

};

#endif // MODEL_H
