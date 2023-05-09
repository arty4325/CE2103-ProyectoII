//
// Created by monicaegm on 4/27/23.
//

#ifndef BATTLE_SPACE_GAMEWINDOW_H
#define BATTLE_SPACE_GAMEWINDOW_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <string>
#include <iostream>
#include "Entidad.h"
#include "ListaFantasmas.h"
#include "Enemigo1.h"


class GameWindow: public QGraphicsView{
public:
    GameWindow(QWidget * parent = 0);
private:
    QString pattern;
    int nivel = 1;
    Entidad *pacman = new Entidad(5);
    ListaFantasmas* Fantasmas = new ListaFantasmas();

    void CreateMap();
    void CreateLevels(int lvl);
    void keyPressEvent(QKeyEvent *event);
};


#endif //BATTLE_SPACE_GAMEWINDOW_H
