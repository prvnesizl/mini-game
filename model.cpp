#include "model.h"
#include <QBrush>
#include <QMessageBox>
#include <QPushButton>


Model::Model(QGraphicsView *view, QObject *parent)
    : QObject{parent},
      view(view)
{
    scene = new QGraphicsScene(this);
    view->setScene(scene);
    QPixmap pix(":/img/fon.jpg");
    pix = pix.scaled(800, 800);
    QBrush *b = new QBrush(pix);

    view->setBackgroundBrush(*b);

    scene->setSceneRect(0,0,pFieldSideSize,pFieldSideSize);

    int maxRectNum = pFieldSideSize/rectSideSize;
    QPixmap stoun(":/img/stoun.jpg");

    clearRects =
    /* {линия, столбец} */
        /* {линия, столбец} */
    {{1,1},{1,2},{1,3},{2,3},{3,3},{3,2},{4,2},{5,2},
     {5,3},{5,4},{5,5},{4,5},{2,5},{2,6},{2,7},{3,7},
     {4,7},{5,7},{5,6},{6,4},{7,4},{8,4},{9,4},{9,5},
     {9,6},{9,7}, {9,8}, {9,9}, {10,9}, {10,10},
     {10,2}, {9,2}, {9,3}, {7,5}, {7,6}, {7,7},
     {7,8}, {7,9}, {7,10}, {1,9}, {1, 10}, {1,11},
     {1,12}, {1,13}, {1,14}, {1,15}, {1,16}, {1,17}, {1,18},
     {1,19}, {2,19}, {3,19}, {3,18}, {3,17}, {3,16}, {3,15},
     {3,14}, {3,13}, {3,11}, {3,10}, {3,9}, {2,9}, {4,11}, {5,11},
     {5,10}, {6,10}, {4,13}, {5,13}, {6,13}, {7,13}, {7,12}, {7,14},
     {7,15}, {7,16}, {7,17}, {7,18}, {6,18}, {5,18}, {5,17}, {5,16},
     {8,12}, {9,12}, {9,13}, {9,14}, {10,14}, {10,15}, {10,16}, {10,17},
     {10,18}, {10,19}, {12,19}, {11,19}, {12,18},
     {12,17}, {12,16}, {12,15},
     {12,14}, {12,13}, {12,12}, {12,11}, {13,11}, {14,11}, {14,11},
     {14,12}, {14,13}, {14,14}, {14,15}, {14,16}, {15,16}, {11,2},
     {11,3}, {11,4}, {11,5}, {12,5}, {13,5}, {13,6}, {13,7}, {13,8},
     {13,9}, {14,9}, {15,9}, {15,8}, {15,7}, {15,6}, {16,6}, {17,6},
     {17,7}, {17,8}, {17,9}, {17,10}, {17,11},
     {16,11}, {16,12},{16,13}, {16,14}, {17,14}, {17, 15},
     {17, 16}, {17,17}, {17,18}, {17,19}, {18,19}, {19,19}, {12,2},
     {13,2}, {14,2}, {15,2}, {15,1}, {16,1}, {17,1}, {17,2}, {17,3},
     {17,4}, {16,4}};


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
            else
            {
                QPair<int, int> currCoord(lineIndex, colIndex);
                if(!clearRects.contains(currCoord)){
                    scene->addRect(colIndex*rectSideSize, lineIndex*rectSideSize, rectSideSize, rectSideSize);
                    QGraphicsPixmapItem *tmp = scene->addPixmap(stoun.scaled(40,40));
                    tmp->setPos(colIndex*rectSideSize, lineIndex*rectSideSize);
                }
            }
        }
    }


    // for(int vIndex = 0; vIndex < coorMatrix.length(); vIndex++)
    // {
    //     scene->addRect(coorMatrix[vIndex].first, coorMatrix[vIndex].second, rectSideSize, rectSideSize);
    //     QGraphicsPixmapItem *tmp = scene->addPixmap(stoun.scaled(40,40));
    //     tmp->setPos(coorMatrix[vIndex].first, coorMatrix[vIndex].second);
    // }

    QPixmap pFish(":/img/fish.png");
    fish = scene->addPixmap(pFish.scaled(40,40));
    fish->setPos(40,40);

}

void Model::fishUp()
{
    bool isPossibol = false;
    int line = fish->x()/40;
    int col = fish->y()/40-1;
    for(int fieldIndex = 0; fieldIndex < clearRects.count(); fieldIndex++)
    {
        if(clearRects[fieldIndex].first == col && clearRects[fieldIndex].second == line)
        {
            isPossibol = true;
            break;
        }
    }
    if(isPossibol)
        fish->setPos(QPoint(fish->x(), fish->y()-40));
    finish();
}

void Model::fishDown()
{

    bool isPossibol = false;
    int line = fish->x()/40;
    int col = fish->y()/40+1;
    for(int fieldIndex = 0; fieldIndex < clearRects.count(); fieldIndex++)
    {
        if(clearRects[fieldIndex].first == col && clearRects[fieldIndex].second == line)
        {
            qDebug() << "можно";
            isPossibol = true;
            break;
        }
    }
    if(isPossibol)
        fish->setPos(QPoint(fish->x(), fish->y()+40));
    finish();
}

void Model::fishLeft()
{
    bool isPossibol = false;
    int line = fish->x()/40-1;
    int col = fish->y()/40;
    for(int fieldIndex = 0; fieldIndex < clearRects.count(); fieldIndex++)
    {
        if(clearRects[fieldIndex].first == col && clearRects[fieldIndex].second == line)
        {
            isPossibol = true;
            break;
        }
    }
    if(isPossibol)
        fish->setPos(QPoint(fish->x()-40, fish->y()));
    finish();
}

void Model::fishRight()
{
    bool isPossibol = false;
    int line = fish->x()/40+1;
    int col = fish->y()/40;
    for(int fieldIndex = 0; fieldIndex < clearRects.count(); fieldIndex++)
    {
        if(clearRects[fieldIndex].first == col && clearRects[fieldIndex].second == line)
        {
            isPossibol = true;
            break;
        }
    }
    if(isPossibol)
        fish->setPos(QPoint(fish->x()+40, fish->y()));
    finish();
}

void Model::restart()
{
    fish->setPos(QPoint(40, 40));
}

void Model::finish()
{
    if(fish->x() == 760 && fish->y() == 720)
    {
        QMessageBox msgBox;
        msgBox.setText("Игра окончена.");
        msgBox.setInformativeText("Вы хотите повторить?");
        msgBox.addButton("Да, хочу хочу хочу!!!",QMessageBox::YesRole);
        msgBox.addButton("Нет, уберите это от меня!!!",QMessageBox::NoRole);
        int ret = msgBox.exec();
        qDebug() << ret;
        switch (ret) {
          case 2:
              fish->setPos(QPoint(40, 40));
              break;
          case 3:
              exit(0);
              break;

        }

    }
}
