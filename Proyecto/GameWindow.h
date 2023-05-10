//
// Created by monicaegm on 4/27/23.
//

#ifndef BATTLE_SPACE_GAMEWINDOW_H
#define BATTLE_SPACE_GAMEWINDOW_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <string>
#include <iostream>
#include <QLabel>
#include "Entidad.h"
#include "ListaFantasmas.h"
#include "Enemigo1.h"
#include "PlayerPacman.h"


class GameWindow: public QGraphicsView{
public:
    GameWindow(QWidget * parent = 0);
private:
    QString pattern;
    int nivel = 1;
    int puntaje = 0;
    int vidas = 3;
    //Entidad *pacman = new Entidad(5);
    ListaFantasmas* Fantasmas = new ListaFantasmas();

    PlayerPacman *playerpacman;
    Enemigo1 *enemigo1;

    QLabel *labelVidas;
    QLabel *labelNivel;
    QLabel *labelPuntaje;

    void CreateMap();
    void CreateLevels(int lvl);
    void keyPressEvent(QKeyEvent *event);
};


#endif //BATTLE_SPACE_GAMEWINDOW_H
