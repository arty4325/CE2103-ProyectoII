//
// Created by monicaegm on 4/27/23.
//

#include <QWidget>
#include "GameWindow.h"
#include <cassert>
#include <QDebug>
#include <QTimer>
#include <iostream>
#include <QDir>
#include "Cell.h"
using namespace std;

GameWindow::GameWindow(QWidget * parent){
    cout<<"ventana";
    QGraphicsScene *scene = new QGraphicsScene(); // Se crea la escena
    scene -> setSceneRect(0, 0, 1000, 700);

    QString direc = QDir::currentPath(); // Se agrega un fondo al juego
    QPixmap backgroundImage(direc.mid(0,direc.length() - 18) + "/Images/fondo.jpg");
    if (backgroundImage.isNull()) {
        cout << "Error: no se pudo cargar la imagen de fondo.";
    }
    else {
        // Crear un objeto QBrush a partir de la imagen
        QBrush backgroundBrush(backgroundImage);

        // Establecer el pincel de fondo de la escena con el objeto QBrush
        scene->setBackgroundBrush(backgroundBrush);
    }

    for (int ypos = 0; ypos<= 700; ypos = ypos +10){
        //cout<<"ypos"<<ypos;
        for(int xpos = 0; xpos <= 1000; xpos = xpos+50) {
            //cout<<"xpos"<<xpos;

            Cell *cell = new Cell(1);
            cell->setPos(xpos, ypos);
            scene->addItem(cell);
    }
    }
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(900, 600);
    show();
}