//
// Created by monicaegm on 5/10/23.
//

#ifndef PACMAN_PUNTOS_H
#define PACMAN_PUNTOS_H
#include <QGraphicsPixmapItem>

class Puntos : public QGraphicsPixmapItem{
public:
    Puntos(QGraphicsItem *parent= nullptr);
    int getId();
    int setId(int id);

    Puntos* next;
    char type;
    int id = 0;
    bool eliminado;
};


#endif //PACMAN_PUNTOS_H
