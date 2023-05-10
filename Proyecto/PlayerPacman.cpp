//
// Created by oscaraad on 09/05/23.
//

#include <QGraphicsItem>
#include <QDir>
#include "PlayerPacman.h"


PlayerPacman::PlayerPacman(QGraphicsItem *parent)
    : QGraphicsPixmapItem(parent){
        QString direc = QDir::currentPath();
        QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/pacman1.png");
        setPixmap(imagen.scaled(50, 50));
}