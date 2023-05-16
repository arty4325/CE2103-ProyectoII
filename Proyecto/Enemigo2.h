//
// Created by oscaraad on 13/05/23.
//

#ifndef PACMAN_ENEMIGO2_H
#define PACMAN_ENEMIGO2_H


class Enemigo2 : public QGraphicsPixmapItem{
public:
    Enemigo2(QGraphicsItem *parent = nullptr);

    void Asustado();

    void backToNormal();
};


#endif //PACMAN_ENEMIGO2_H
