//
// Created by oscaraad on 09/05/23.
//


#include <QPushButton>
#include <QLabel>
#include <QWidget>
#include <QtWidgets>
#include <QGraphicsProxyWidget>
#include <QRectF>
#include <iostream>
#include "MenuDificultades.h"
#include "GameWindow.h"

using namespace std;



void MenuDificultades::medium() {
    GameWindow *medium;
    cout << "Funciona el otro boton de la interfaz" << endl;
    medium = new GameWindow();
    medium -> show();
    this -> close();
}



MenuDificultades::MenuDificultades(QWidget *parent) {
    QGraphicsScene *scene = new QGraphicsScene();
    scene -> setSceneRect(0, 0, 900, 600);
    int width = 900;
    int height = 600;

    QLabel *label = new QLabel("Proyecto II Datos II");
    QGraphicsProxyWidget *proxy_label = new QGraphicsProxyWidget();
    proxy_label -> setWidget(label);
    QFont font("Arial", 20, QFont::Helvetica);
    label ->setStyleSheet("background-color: white");
    label -> setFont(font);
    scene -> addItem(proxy_label);
    proxy_label -> setPos(330, 250);

    //Ahora se crea un boton el cual crea la ventana para ir al juego de dificultad media
    QPushButton * botonNormal = new QPushButton("Dificultad Normal");
    botonNormal ->setGeometry(0, 0, 170, 50);
    QGraphicsProxyWidget *proxy_normal = new QGraphicsProxyWidget();
    proxy_normal ->setWidget(botonNormal);
    scene -> addItem(proxy_normal);
    proxy_normal -> setPos(400, 500);
    connect(botonNormal, &QPushButton::released, this, &MenuDificultades::medium);

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1000, 700);

    show();
}