//
// Created by monicaegm on 5/14/23.
//

#ifndef PACMAN_LEVEL2_H
#define PACMAN_LEVEL2_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include <string>
#include <iostream>
#include <QLabel>
#include <QTimer>
#include "puntosLista.h"
#include "Enemigo1.h"
#include "PlayerPacman.h"

#include "Enemigo2.h"
#include "Enemigo3.h"
#include "Enemigo4.h"
#include "SimpleList.h"
#include "PastillaPoder.h"


class Level2: public QGraphicsView{
public:
    Level2(QWidget * parent = 0);
    void setValues(int p, int v, int n);

    void SocketServer();

private:
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

    bool isPowerActivated;
    bool isSearchingPower;

    SimpleList<SimpleList<int>> route1;
    SimpleList<std::pair<int, int>> route2;


    QTimer* movementFirstEnemy;
    QTimer* movementSecondEnemy;
    QTimer* movementThirdEnemy;
    QTimer* movementFourthEnemy;
    QTimer* revisarChoque;
    QTimer* movementPacmanMobile;
    QTimer* exeMovementPacmanMobile;
    QTimer* encontrarpoder;

    puntosLista* Fantasmas = new puntosLista();

    PlayerPacman *playerpacman;
    Enemigo1 *enemigo1;
    Enemigo2 *enemigo2;
    Enemigo3 *enemigo3;
    Enemigo4 *enemigo4;
    PastillaPoder *poder;
    //SimpleList<SimpleList<SimpleList<int>>> matriz;
    puntosLista *puntoslista;
    SimpleList<float> datosSerial;

    int mapa[12][18] =
            {
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1},
                    {1,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,1},
                    {1,0,0,0,1,0,0,0,1,1,0,0,0,1,0,0,0,1},
                    {1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1},
                    {1,0,0,1,1,1,0,0,0,0,0,0,1,1,1,0,0,1},
                    {1,1,0,0,0,1,1,1,0,0,1,1,1,0,0,0,1,1},
                    {1,1,1,1,0,0,1,0,0,0,0,1,0,0,1,1,1,1},
                    {1,0,0,0,0,1,1,1,0,0,1,1,1,0,0,0,0,1},
                    {1,0,1,1,0,1,1,0,0,0,0,1,1,0,1,1,0,1},
                    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
            };

/*= {
            { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
    } */;

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

    bool backtracking(int ene2x, int ene2y, int pox, int poy, int matriz[12][18], int matrizsolucion[11][17]);
    void comerPoderes();

    void pararEjecucion();

    SimpleList<SimpleList<int>>
    FindPath(SimpleList<SimpleList<int>> completeCasillas, SimpleList<SimpleList<int>> hCasillas, int beginX,
             int beginY,
             int endX, int endY);

    SimpleList<SimpleList<int>> PathfindingA(int beginX, int beginY, int endX, int endY);
    bool backtracking(int ene2x, int ene2y, int pox, int poy);

    void nuevaMatrizMovement();


    bool isValidPosition(int mapa[12][18], int x, int y);
    bool backtrack(int mapa[12][18], int startX, int startY, int targetX, int targetY, SimpleList<std::pair<int, int>>& ruta);
    SimpleList<std::pair<int, int>> encontrarRuta(int mapa[12][18], int startX, int startY, int targetX, int targetY);
};

#endif //PACMAN_LEVEL2_H
