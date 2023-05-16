//
// Created by oscaraad on 13/05/23.
//

#ifndef PACMAN_ENEMIGO4_H
#define PACMAN_ENEMIGO4_H


#include <QGraphicsItem>

class Enemigo4 : public QGraphicsPixmapItem{
public:
    Enemigo4(QGraphicsItem *parent = nullptr);

    void Asustado();

    void backToNormal();
};


#endif //PACMAN_ENEMIGO4_H
