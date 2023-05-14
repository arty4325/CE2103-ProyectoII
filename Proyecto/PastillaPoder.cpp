//
// Created by oscaraad on 14/05/23.
//

#include "PastillaPoder.h"

#include <QGraphicsItem>
#include <QDir>

PastillaPoder::PastillaPoder(QGraphicsItem * parent)
    : QGraphicsPixmapItem(parent) {
    QString direc = QDir::currentPath();
    QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/poder.png");
    setPixmap(imagen.scaled(50, 50));
}