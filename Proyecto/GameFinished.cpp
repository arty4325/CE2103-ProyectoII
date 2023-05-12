//
// Created by monicaegm on 5/10/23.
//

#include <QPushButton>
#include <QLabel>
#include <QWidget>
#include <QtWidgets>
#include <QGraphicsProxyWidget>
#include <QRectF>
#include <iostream>
#include <QDir>
#include "GameFinished.h"
using namespace std;

GameFinished::GameFinished(QWidget *parent) {
    QGraphicsScene *scene = new QGraphicsScene();
    scene -> setSceneRect(0, 0, 900, 600);
    int width = 900;
    int height = 600;

    QString direc = QDir::currentPath();
    QPixmap backgroundImage(direc.mid(0,direc.length()-18)+"/Images/gameFinished.jpg");
    if (backgroundImage.isNull()){
        cout << "Error con la imagen de game finished";
    }
    else{
        // Crear un objeto QBrush a partir de la imagen
        QBrush backgroundBrush(backgroundImage);

        // Establecer el pincel de fondo de la escena con el objeto QBrush
        scene->setBackgroundBrush(backgroundBrush);
    }
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1000, 700);

    label = new QLabel(this);
    label -> setText("Se termino el juego!!");
    label -> setStyleSheet("color: yellow; font-weight: bold; font-size: 20pt; font-family: Times;");
    label -> move(400, 10);
    label -> show();

    show();
}

void GameFinished::setPuntaje(int puntaje){
    labelp = new QLabel(this);
    labelp -> setText("Puntaje: "+QString::number(puntaje));
    labelp -> setStyleSheet("color: blue; font-weight: bold; font-size: 20pt; font-family: Times;");
    labelp -> move(400, 100);
    labelp -> show();
}