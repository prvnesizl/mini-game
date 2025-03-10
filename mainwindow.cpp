#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    installEventFilter(this);
    setFixedSize(940, 940);
    model = new Model(ui->graphicsView, this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyReleaseEvent(QKeyEvent *event)
{

    switch(event->key())
    {
    case 16777237:
        qDebug() << "Вниз";
        break;
    case 16777235:
        qDebug() << "Вверх";
        break;
    case 16777234:
        qDebug() << "Влево";
        break;
    case 16777236:
        qDebug() << "Вправо";
        break;
    }
}

