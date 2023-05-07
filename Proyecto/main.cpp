
#include <iostream>
#include <QApplication>
#include <QWidget>
#include <QKeyEvent>
#include <QPainter>
#include <QImage>
#include <QTimer>
#include <QPushButton>
#include <QVBoxLayout>
#include "GameWindow.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // create a game of pacman
    GameWindow* gamewindow = new GameWindow();
    gamewindow->show();

    return a.exec();

}
