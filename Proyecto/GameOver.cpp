//
// Created by monicaegm on 5/13/23.
//
#include <QLabel>
#include <QWidget>
#include <QtWidgets>
#include <QGraphicsProxyWidget>
#include <QRectF>
#include <iostream>
#include <QDir>
#include "GameOver.h"
using namespace std;
/**
 * @brief Constructor para la pantalla de perder el juego
 * @param parent QWidget puntero
 */
GameOver::GameOver(QWidget *parent) {
    QGraphicsScene *scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, 900, 600);
    int width = 900;
    int height = 600;

    QString direc = QDir::currentPath();
    QPixmap backgroundImage(direc.mid(0, direc.length() - 18) + "/Images/gameOver.jpg");
    if (backgroundImage.isNull()) {
        cout << "Error con la imagen de game over";
    } else {
// Crear un objeto QBrush a partir de la imagen
        QBrush backgroundBrush(backgroundImage);

// Establecer el pincel de fondo de la escena con el objeto QBrush
        scene->setBackgroundBrush(backgroundBrush);
    }
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1000, 700);
}