//
// Created by oscaraad on 08/05/23.
//

#include <QGraphicsItem>
#include <QDir>

#include "Enemigo1.h"

Enemigo1::Enemigo1(QGraphicsItem *parent)
    : QGraphicsPixmapItem(parent) {
    QString direc = QDir::currentPath();
    QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/Fantasma1.png");
    setPixmap(imagen.scaled(50, 50));
}



