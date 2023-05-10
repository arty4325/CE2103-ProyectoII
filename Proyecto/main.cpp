
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
#include "MenuDificultades.h"

MenuDificultades * menuGeneral;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // create a game of pacman
    menuGeneral = new MenuDificultades();
    menuGeneral -> show();

    return a.exec();

}
