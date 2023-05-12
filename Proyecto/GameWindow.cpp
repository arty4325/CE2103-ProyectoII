//
// Created by monicaegm on 4/27/23.
//
#include <cassert>
#include <QDebug>
#include <QTimer>
#include <QGraphicsRectItem>
#include <QRandomGenerator>
#include <QWidget>
#include <QtWidgets>
#include <QLabel>
#include <QThread>
#include <string>
#include <iostream>
#include <QDir>
#include <iterator>
#include "Cell.h"
#include "GameWindow.h"
#include "Entidad.h"
#include "Enemigo1.h"

using namespace std;

GameWindow::GameWindow(QWidget * parent){
    QGraphicsScene *scene = new QGraphicsScene(); // Se crea la escena
    scene -> setSceneRect(0, 0, 900, 600);



    for(int i = 0; i < 12; i++){
        SimpleList<SimpleList<int>> fila;
        for(int j = 0; j < 18; j++){
            SimpleList<int> informacion;
            fila.insertHead(informacion);
        }
        matriz.insertHead(fila);
    }
    for(int i = 0; i < 12; i++){
        for(int k = 0; k < 18; k++){
            matriz.getPosVal(i).getPosVal(k).insertHead(0);
        }
    }

    matriz.getPosVal(0).getPosVal(0).insertHead(1);

    // Se agrega el contorno del mapa como obstaculo
    for(int w = 0; w < 18; w++){
        matriz.getPosVal(0).getPosVal(w).insertHead(1);
    }
    for(int k = 1; k < 12; k++){
        matriz.getPosVal(k).getPosVal(16).insertHead(1);
    }
    for(int z = 0; z < 17; z++){
        matriz.getPosVal(11).getPosVal(z).insertHead(1);
    }
    for(int c = 1; c < 11; c++){
        matriz.getPosVal(c).getPosVal(0).insertHead(1);
    }


    //Se agregan las paredes de la columna 1
    matriz.getPosVal(1).getPosVal(3).insertHead(1);
    matriz.getPosVal(1).getPosVal(15).insertHead(1);

    // Se agregan laas paredes de la columna 2
    matriz.getPosVal(2).getPosVal(6).insertHead(1);
    matriz.getPosVal(2).getPosVal(7).insertHead(1);
    matriz.getPosVal(2).getPosVal(8).insertHead(1);
    matriz.getPosVal(2).getPosVal(9).insertHead(1);
    matriz.getPosVal(2).getPosVal(10).insertHead(1);
    matriz.getPosVal(2).getPosVal(11).insertHead(1);

    //Se agregan las paredes de la columna 3
    matriz.getPosVal(3).getPosVal(1).insertHead(1);
    matriz.getPosVal(3).getPosVal(16).insertHead(1);

    //Se agregan las paredes de la columna 4
    matriz.getPosVal(4).getPosVal(4).insertHead(1);
    matriz.getPosVal(4).getPosVal(5).insertHead(1);
    matriz.getPosVal(4).getPosVal(6).insertHead(1);
    matriz.getPosVal(4).getPosVal(7).insertHead(1);

    matriz.getPosVal(4).getPosVal(10).insertHead(1);
    matriz.getPosVal(4).getPosVal(11).insertHead(1);
    matriz.getPosVal(4).getPosVal(12).insertHead(1);
    matriz.getPosVal(4).getPosVal(13).insertHead(1);

    //Se agregan las paredes de la columna 5
    matriz.getPosVal(5).getPosVal(4).insertHead(1);
    matriz.getPosVal(5).getPosVal(5).insertHead(1);
    matriz.getPosVal(5).getPosVal(6).insertHead(1);

    matriz.getPosVal(5).getPosVal(11).insertHead(1);
    matriz.getPosVal(5).getPosVal(12).insertHead(1);
    matriz.getPosVal(5).getPosVal(13).insertHead(1);

    //Se agregaan las paredes de la columna 7
    matriz.getPosVal(7).getPosVal(5).insertHead(1);
    matriz.getPosVal(7).getPosVal(6).insertHead(1);
    matriz.getPosVal(7).getPosVal(7).insertHead(1);
    matriz.getPosVal(7).getPosVal(8).insertHead(1);
    matriz.getPosVal(7).getPosVal(9).insertHead(1);
    matriz.getPosVal(7).getPosVal(10).insertHead(1);
    matriz.getPosVal(7).getPosVal(11).insertHead(1);
    matriz.getPosVal(7).getPosVal(12).insertHead(1);

    //Se agregan las paredes de la columna 8
    matriz.getPosVal(8).getPosVal(1).insertHead(1);
    matriz.getPosVal(8).getPosVal(8).insertHead(1);
    matriz.getPosVal(8).getPosVal(9).insertHead(1);
    matriz.getPosVal(8).getPosVal(16).insertHead(1);

    //se agregan las paredes de la columna 9
    matriz.getPosVal(9).getPosVal(1).insertHead(1);
    matriz.getPosVal(9).getPosVal(2).insertHead(1);
    matriz.getPosVal(9).getPosVal(3).insertHead(1);
    matriz.getPosVal(9).getPosVal(8).insertHead(1);
    matriz.getPosVal(9).getPosVal(9).insertHead(1);
    matriz.getPosVal(9).getPosVal(14).insertHead(1);
    matriz.getPosVal(9).getPosVal(15).insertHead(1);
    matriz.getPosVal(9).getPosVal(16).insertHead(1);

    //Se agregan las paredes de la columna 10
    matriz.getPosVal(10).getPosVal(5).insertHead(1);
    matriz.getPosVal(10).getPosVal(6).insertHead(1);
    matriz.getPosVal(10).getPosVal(11).insertHead(1);
    matriz.getPosVal(10).getPosVal(12).insertHead(1);



    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(900, 600);

    

    CreateLevels(nivel);

    playerpacman = new PlayerPacman();
    playerpacman -> setPos(400, 400);
    scene -> addItem(playerpacman);

    enemigo1 = new Enemigo1();
    enemigo1 -> setPos(500, 500);
    scene -> addItem(enemigo1);



    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(900, 600);

    show();
}
void GameWindow::CreateMap() {
    int ypos = 0;
    int xpos = 7;


    for (int i = 0; i < this->pattern.length(); i++) { // Por cada simbolo en el QString coloca el sprite correspondiente
        QChar c = this->pattern.at(i);

        if (c == "n") {
            ypos = ypos + 50;
            xpos = 0;
        }
        if (c == "0") {
            Cell *cell = new Cell(0);
            cell->setPos(xpos, ypos);
            scene()->addItem(cell);
            /*
            if (i == 102) { //Coloca los fantasmas
                int c = xpos;

                for (int j = 1; j <= nivel; j++) {
                    cout<<"j"<<j;
                    Fantasmas->findFantasma(j)->setPos(c, ypos);
                    c = c + 50;
                }
            }
            if (i == 199) { //Coloca a Pacman
                pacman->setPos(xpos, ypos);
                }
            */
            xpos = xpos + 50;

        }

        if (c == "1") {
            Cell *cell = new Cell(1);
            cell->setPos(xpos, ypos);
            scene()->addItem(cell);
            xpos = xpos + 50;
        }
    }
}
void GameWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_K) { //La letra K crea nuevos niveles
        nivel = nivel + 1;
        CreateLevels(nivel);
    }
    if (event->key() == Qt::Key_W) {
        //pacman->setPos(+0,+50);
        playerpacman -> setPos(playerpacman -> pos().x(), playerpacman -> pos().y() - 50);
        cout << "Se estripa w" << endl;
    }
    if (event->key() == Qt::Key_S) {
        //pacman->setPos(+0,-50);
        playerpacman -> setPos(playerpacman -> pos().x(), playerpacman -> pos().y()+50);
        cout << "Se estripa S" << endl;
    }
    if (event->key() == Qt::Key_A) {
        //pacman->setPos(-50,+0);
        playerpacman -> setPos(playerpacman -> pos().x() - 50, playerpacman -> pos().y());
        cout << "Se estripa A" << endl;
    }
    if (event->key() == Qt::Key_D) {
        //pacman->setPos(+50,+0);
        playerpacman -> setPos(playerpacman -> pos().x() + 50, playerpacman -> pos().y());
        cout << "Se estripa D" << endl;
    }
}
void GameWindow::CreateLevels(int lvl){
    switch(lvl){
        case 1:{
            this-> pattern = "111111111111111111n100100000000001001n100000111111000001n110000000000000011n100011110011110001n100011100001110001n100000000000000001n100001111111100001n110000001100000011n111100001100001111n100001100001100001n111111111111111111";
            CreateMap();
            break;
        }
        case 2:{
            this-> pattern = "111111111111111111n100000001100000001n100110001100011001n100010001100010001n100000001100000001n100111000000111001n110001110011100011n111100100001001111n100001110011100001n101101100001101101n101000000000000101n111111111111111111";
            CreateMap();
            break;
        }
        case 3:{
            this-> pattern ="111111111111111111n100001001100100001n111000000000000111n100001110011100001n101100100001001101n100001100001100001n110001101101100011n111100001100001111n100001111111100001n101100100001001101n100000000000000001n111111111111111111";
            CreateMap();
            break;
        }
        case 4:{
            this-> pattern ="111111111111111111n100100000000001001n101101111111101101n100000001100000001n101100100001001101n100000100001000001n101100001100001101n10000011111000001n111100001100001111n100001001100100001n101101100001101101n111111111111111111";
            CreateMap();
            break;
        }
    }
}