//
// Created by oscaraad on 13/05/23.
//

#ifndef PACMAN_ENEMIGO3_H
#define PACMAN_ENEMIGO3_H


#include <QGraphicsItem>

class Enemigo3 : public QGraphicsPixmapItem{
public:
    Enemigo3(QGraphicsItem *parent = nullptr);

    void Asustado();

    void backToNormal();
};


#endif //PACMAN_ENEMIGO3_H
