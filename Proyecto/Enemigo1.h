//
// Created by oscaraad on 08/05/23.
//

#ifndef PACMAN_ENEMIGO1_H
#define PACMAN_ENEMIGO1_H
#include <QGraphicsPixmapItem>

class Enemigo1 : public QGraphicsPixmapItem{
public:
    Enemigo1(QGraphicsItem *parent = nullptr);

    void Asustado();

// Hacer metodos si despues se determina que se ocupan para los enemigos
void backToNormal();

};


#endif //PACMAN_ENEMIGO1_H
