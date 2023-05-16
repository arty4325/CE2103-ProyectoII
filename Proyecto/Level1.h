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
#include <QTimer>
#include "puntosLista.h"


#include "Enemigo1.h"
#include "PlayerPacman.h"
#include "SimpleList.h"
#include "SimpleList.cpp"
#include "Enemigo2.h"
#include "Enemigo3.h"
#include "Enemigo4.h"
#include "PastillaPoder.h"



class Level1: public QGraphicsView{
public:
    Level1(QWidget * parent = 0);

    void SocketServer();

private:

    bool isSearchingPower;

    SimpleList<SimpleList<int>> route1;

    QString pattern;
    int nivel = 1;
    int puntaje = 0;
    int vidas = 3;
    int iden = 0;
    int noquedanpuntos = 0;

    int pacmanX;
    int pacmanY;

    int Enemy1X;
    int Enemy1Y;
    int Enemy2X;
    int Enemy2Y;
    int Enemy3X;
    int Enemy3Y;
    int Enemy4X;
    int Enemy4Y;

    int powerX;
    int powerY;

    QTimer* movementFirstEnemy;
    QTimer* movementSecondEnemy;
    QTimer* movementThirdEnemy;
    QTimer* movementFourthEnemy;
    QTimer* revisarChoque;
    QTimer* movementPacmanMobile;
    QTimer* exeMovementPacmanMobile;

    //Entidad *pacman = new Entidad(5);
    puntosLista* Fantasmas = new puntosLista();

    PlayerPacman *playerpacman;
    Enemigo1 *enemigo1;
    Enemigo2 *enemigo2;
    Enemigo3 *enemigo3;
    Enemigo4 *enemigo4;
    PastillaPoder *poder;
    SimpleList<SimpleList<SimpleList<int>>> matriz;
    puntosLista *puntoslista;
    SimpleList<float> datosSerial;

    int mapa[12][18] = {
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1},
            {1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1},
            {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
            {1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1},
            {1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
            {1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1},
            {1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1},
            {1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1},
            {1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };

    QLabel *labelVidas;
    QLabel *labelNivel;
    QLabel *labelPuntaje;

    bool isTherePower;

    void CreateMap();
    void CreateLevels(int lvl);
    void keyPressEvent(QKeyEvent *event);
    void comerPuntos();

    void MoveFirstEnemy();
    int direc1X;
    int direc1Y;
    bool moving1;

    void MoveSecondEnemy();
    int direc2X;
    int direc2Y;
    bool moving2;

    void MoveThirdEnemy();
    int direc3X;
    int direc3Y;
    bool moving3;

    void MoveFourthEnemy();
    int direc4X;
    int direc4Y;
    bool moving4;

    void revisarEnemigos();
    void startSocketServer();

    void MoveMobile();

    void PlacePowerRandomPos();

    SimpleList<SimpleList<int>> PathfindingA(int beginX, int beginY, int endX, int endY);


    SimpleList<SimpleList<int>> FindPath(SimpleList<SimpleList<int>> completeCasillas, SimpleList<SimpleList<int>> hCasillas, int beginX,
             int beginY,
             int endX, int endY);

    void comerPoderes();
};


#endif //BATTLE_SPACE_GAMEWINDOW_H
