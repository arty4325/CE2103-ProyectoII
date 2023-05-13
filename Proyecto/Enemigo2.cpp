//
// Created by oscaraad on 13/05/23.
//

#include <QGraphicsItem>
#include <QDir>
#include "Enemigo2.h"

Enemigo2::Enemigo2(QGraphicsItem *parent)
: QGraphicsPixmapItem(parent) {
    QString direc = QDir::currentPath();
    QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/Fantasma2.png");
    setPixmap(imagen.scaled(50, 50));
}