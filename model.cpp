#include "model.h"


Model::Model(QGraphicsView *view, QObject *parent)
    : QObject{parent},
      view(view)
{
    scene = new QGraphicsScene(this);
    view->setScene(scene);
    scene->setSceneRect(0,0,pFieldSideSize,pFieldSideSize);

    int maxRectNum = pFieldSideSize/rectSideSize;
    QPixmap stoun(":/img/stoun.jpg");
    for(int lineIndex = 0; lineIndex < maxRectNum; lineIndex++)
    {
        for(int colIndex = 0;colIndex < maxRectNum+1; colIndex++)
        {
            if(lineIndex == 0 || lineIndex == maxRectNum-1)
            {
                scene->addRect(colIndex*rectSideSize, lineIndex*rectSideSize, rectSideSize, rectSideSize);
                QGraphicsPixmapItem *tmp = scene->addPixmap(stoun.scaled(40,40));
                tmp->setPos(colIndex*rectSideSize, lineIndex*rectSideSize);
            }
            else if(colIndex == 0 || colIndex == maxRectNum)
            {
                scene->addRect(colIndex*rectSideSize, lineIndex*rectSideSize, rectSideSize, rectSideSize);
                QGraphicsPixmapItem *tmp = scene->addPixmap(stoun.scaled(40,40));
                tmp->setPos(colIndex*rectSideSize, lineIndex*rectSideSize);
            }
        }
    }


    for(int vIndex = 0; vIndex < coorMatrix.length(); vIndex++)
    {
        scene->addRect(coorMatrix[vIndex].first, coorMatrix[vIndex].second, rectSideSize, rectSideSize);
        QGraphicsPixmapItem *tmp = scene->addPixmap(stoun.scaled(40,40));
        tmp->setPos(coorMatrix[vIndex].first, coorMatrix[vIndex].second);
    }

    QPixmap pFish(":/img/fish.png");
    fish = scene->addPixmap(pFish.scaled(40,40));
    fish->setPos(40,40);

}
