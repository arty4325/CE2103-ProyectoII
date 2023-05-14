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

    QLinearGradient gradient(0,0,0,600);
    gradient.setColorAt(0,Qt::blue);
    gradient.setColorAt(1,Qt::black);
    QBrush brush(gradient);
    scene->setBackgroundBrush(brush);

    int width = 900;
    int height = 600;

    QLabel *label = new QLabel("Proyecto II Datos II");
    QGraphicsProxyWidget *proxy_label = new QGraphicsProxyWidget();
    proxy_label -> setWidget(label);
    QFont font("Arial", 20, QFont::Helvetica);
    label ->setStyleSheet("background-color: transparent;color:white");
    label -> setFont(font);
    scene -> addItem(proxy_label);
    proxy_label -> setPos(330, 250);

    QLabel *label2 = new QLabel("PacManCE");
    QGraphicsProxyWidget *proxy_label2 = new QGraphicsProxyWidget();
    proxy_label2 -> setWidget(label2);
    QFont font2("Arial", 50, QFont::Helvetica);
    label2 ->setStyleSheet("background-color: transparent;color:white");
    label2 -> setFont(font2);
    scene -> addItem(proxy_label2);
    proxy_label2 -> setPos(270, 170);

    //Ahora se crea un boton el cual crea la ventana para ir al juego de dificultad media
    QPushButton * botonNormal = new QPushButton("Dificultad Normal");
    botonNormal ->setGeometry(0, 0, 170, 50);
    botonNormal->setStyleSheet("background-color: #14275D; font-size: 16px; font-weight: bold; color:#FF7F51");
    QGraphicsProxyWidget *proxy_normal = new QGraphicsProxyWidget();
    proxy_normal ->setWidget(botonNormal);
    scene -> addItem(proxy_normal);
    proxy_normal -> setPos(350, 470);
    connect(botonNormal, &QPushButton::released, this, &MenuDificultades::medium);

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1000, 700);

    show();
}