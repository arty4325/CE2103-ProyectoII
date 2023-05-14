//
// Created by oscaraad on 13/05/23.
//

#include <QDir>
#include "Enemigo3.h"

Enemigo3::Enemigo3(QGraphicsItem *parent)
: QGraphicsPixmapItem(parent) {
    QString direc = QDir::currentPath();
    QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/Fantasma3.png");
    setPixmap(imagen.scaled(50,50));
}