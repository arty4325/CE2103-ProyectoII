//
// Created by monicaegm on 5/10/23.
//

#include <QGraphicsItem>
#include <QDir>
#include "Puntos.h"

Puntos::Puntos(QGraphicsItem *parent)
        : QGraphicsPixmapItem(parent) {
    QString direc = QDir::currentPath();
    QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/puntos.png");
    setPixmap(imagen.scaled(50, 50));
}