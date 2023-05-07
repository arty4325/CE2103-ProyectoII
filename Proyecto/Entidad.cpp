//
// Created by monicaegm on 4/30/23.
//

#include "Entidad.h"
#include <QDir>
#include <QPixmap>
#include <QLabel>
#include <iostream>

using namespace std;

Entidad::Entidad(){

}

Entidad::Entidad(char type, QGraphicsItem *parent)
        : QGraphicsPixmapItem(parent){
    next = NULL;
    this->type = type;

    switch (type) {
        case 1: {
            QString direc = QDir::currentPath();
            QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/Fantasma1.png");
            setPixmap(imagen.scaled(50, 50));
            break;
        }
        case 2: {
            QString direc = QDir::currentPath();
            QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/Fantasma2.png");
            setPixmap(imagen.scaled(50, 50));
            break;
        }
        case 3: {
            QString direc = QDir::currentPath();
            QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/Fantasma3.png");
            setPixmap(imagen.scaled(50, 50));
            break;
        }
        case 4: {
            QString direc = QDir::currentPath();
            QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/Fantasma4.png");
            setPixmap(imagen.scaled(50, 50));
            break;
        }
        case 5: {
            QString direc = QDir::currentPath();
            QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/pacman1.png");
            setPixmap(imagen.scaled(50, 50));
            break;
        }
    }
}
Entidad* Entidad::getNext(){
    return next;
}
void Entidad::editPointer(Entidad* nuevoNext){
    this->next=nuevoNext;
}
int Entidad::getId(){
    return type;
}