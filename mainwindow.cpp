#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    installEventFilter(this);
    setFixedSize(1200, 840);
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
        model->fishDown();
        break;
    case 16777235:
        model->fishUp();
        break;
    case 16777234:
        model->fishLeft();
        break;
    case 16777236:
        model->fishRight();
        break;
    case 32:
        model->restart();
        break;
    }
}

