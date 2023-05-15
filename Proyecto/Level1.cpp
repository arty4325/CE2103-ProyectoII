//
// Created by monicaegm on 4/27/23.
//
#include <QTimer>
#include <QGraphicsRectItem>
#include <QRandomGenerator>
#include <QWidget>
#include <QtWidgets>
#include <QLabel>
#include <string>
#include <iostream>
#include "Socket.h"
#include "SocketThread.h"
#include <QTimer>
#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include "Cell.h"
#include "Level1.h"
#include "Enemigo1.h"
#include "Puntos.h"
#include "GameFinished.h"
#include "GameOver.h"
#include "Level2.h"

using namespace std;

Level1::Level1(QWidget * parent){
    QGraphicsScene *scene = new QGraphicsScene(); // Se crea la escena
    scene -> setSceneRect(0, 0, 900, 600);

    puntoslista = new puntosLista();

    for(int i = 0; i < 12; i++){
        SimpleList<SimpleList<int>> fila2;
        for(int j = 0; j < 18; j++){
            SimpleList<int> informacion;
            fila2.insertHead(informacion);
        }
        matriz.insertHead(fila2);
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

    //cout << mapa[7][9] << endl;

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(900, 600);

    CreateLevels(nivel);

    playerpacman = new PlayerPacman();
    playerpacman -> setPos(400, 300);
    scene -> addItem(playerpacman);
    pacmanX = 8;
    pacmanY = 6;


    Enemy1X = 7;
    Enemy1Y = 10;

    Enemy2X = 8;
    Enemy2Y = 1;

    Enemy3X = 9;
    Enemy3Y = 1;

    Enemy4X = 10;
    Enemy4Y = 10;

    direc1X = 0;
    direc1Y = 0;
    moving1 = false;

    direc2X = 0;
    direc2Y = 0;
    moving2 = false;

    direc3X = 0;
    direc3Y = 0;
    moving3 = false;

    direc4X = 0;
    direc4Y = 0;
    moving4 = false;

    enemigo1 = new Enemigo1();
    enemigo1 -> setPos(350, 500);
    scene -> addItem(enemigo1);

    enemigo2 = new Enemigo2();
    enemigo2 -> setPos(400, 50);
    scene -> addItem(enemigo2);

    enemigo3 = new Enemigo3();
    enemigo3 -> setPos(450, 50);
    scene -> addItem(enemigo3);

    enemigo4 = new Enemigo4();
    enemigo4 -> setPos(500, 500);
    scene -> addItem(enemigo4);

    poder = new PastillaPoder();
    poder -> setPos(-50, -50);
    scene -> addItem(poder);

    movementFirstEnemy = new QTimer(this);
    connect(movementFirstEnemy, &QTimer::timeout, this, &Level1::MoveFirstEnemy);
    movementFirstEnemy ->setInterval(500);
    movementFirstEnemy -> start();

    movementSecondEnemy = new QTimer(this);
    connect(movementSecondEnemy, &QTimer::timeout, this, &Level1::MoveSecondEnemy);
    movementSecondEnemy ->setInterval(500);
    movementSecondEnemy -> start();

    movementThirdEnemy =  new QTimer(this);
    connect(movementThirdEnemy, &QTimer::timeout, this, &Level1::MoveThirdEnemy);
    movementThirdEnemy -> setInterval(500);
    movementThirdEnemy -> start();

    movementFourthEnemy = new QTimer(this);
    connect(movementFourthEnemy, &QTimer::timeout, this, &Level1::MoveFourthEnemy);
    movementFourthEnemy -> setInterval(500);
    movementFourthEnemy -> start();

    revisarChoque = new QTimer(this);
    connect(revisarChoque, &QTimer::timeout, this, &Level1::revisarEnemigos);
    revisarChoque -> setInterval(500);
    revisarChoque -> start();
    
    movementPacmanMobile = new QTimer(this);
    connect(movementPacmanMobile, &QTimer::timeout, this, &Level1::startSocketServer);
    movementPacmanMobile -> setInterval(500);
    movementPacmanMobile -> start();

    exeMovementPacmanMobile = new QTimer(this);
    connect(exeMovementPacmanMobile, &QTimer::timeout, this, &Level1::MoveMobile);
    exeMovementPacmanMobile -> setInterval(500);
    exeMovementPacmanMobile -> start();




    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(900, 600);

    labelVidas = new QLabel(this); // Label de la cantidad de vidas
    labelVidas ->setText("Vidas: " + QString::number(vidas));
    labelVidas -> setStyleSheet("color: white; font-weight: bold; font-size: 14pt; font-family: Times;");
    labelVidas -> move(7, 0);
    labelVidas -> show();

    labelPuntaje = new QLabel(this); // Label del puntaje
    labelPuntaje ->setText("Puntaje: " + QString::number(puntaje));
    labelPuntaje -> setStyleSheet("color: white; font-weight: bold; font-size: 14pt; font-family: Times;");
    labelPuntaje -> move(420, 0);
    labelPuntaje->setFixedSize(1000, 30); // establece el ancho en 100 píxeles y la altura en 30 píxeles
    labelPuntaje -> show();

    labelNivel = new QLabel(this); // Label del nivel
    labelNivel ->setText("Nivel: " + QString::number(nivel));
    labelNivel -> setStyleSheet("color: white; font-weight: bold; font-size: 14pt; font-family: Times;");
    labelNivel -> move(820, 0);
    labelNivel -> show();

    show();
}


void Level1::startSocketServer(){
    SocketThread* socketThread = new SocketThread(this);
    connect(socketThread, &SocketThread::finished, socketThread, &SocketThread::deleteLater);
    socketThread -> start();
}

void Level1::CreateMap() {
    int ypos = 0;
    int xpos = 7;

    puntoslista->eliminarLista();

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

            Puntos *punto = new Puntos();
            punto->setId(iden);
            punto->setPos(xpos,ypos);
            scene()->addItem(punto);
            iden = iden + 1;
            puntoslista->insertarPuntos(punto);

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
void Level1::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_K) { //La letra K crea nuevos niveles
        movementPacmanMobile->stop();
        exeMovementPacmanMobile->stop();

        nivel = nivel + 1;

        Level2 *level2;
        level2 = new Level2();
        level2 -> setValues(puntaje, vidas, nivel);

        level2 -> show();
        this-> close();

        labelNivel->setText("Nivel: "+ QString::number(nivel));
        if (nivel > 4){
            GameFinished *gamefinished;
            gamefinished = new GameFinished();
            gamefinished -> setPuntaje(this->puntaje);
            gamefinished->show();
            this->close();
        }
        CreateLevels(nivel);
    }
    if (event->key() == Qt::Key_W) {
        if(mapa[pacmanY - 1][pacmanX] == 0) {
            pacmanY -= 1;
            playerpacman->setPos(playerpacman->pos().x(), playerpacman->pos().y() - 50);
            cout << "Se estripa w" << endl;

            comerPuntos();
            revisarEnemigos();
        } else {
            //cout << "Hay obstaculo" << endl;
        }
    }
    if (event->key() == Qt::Key_S) {
        //cout << pacmanX << pacmanY << endl;
        //cout << pacmanX << pacmanY + 1<< endl;
        //cout << mapa[pacmanY + 1][pacmanX] << endl;
        //pacman->setPos(+0,-50);
        if(mapa[pacmanY + 1][pacmanX] == 0) {
            pacmanY += 1;
            playerpacman->setPos(playerpacman->pos().x(), playerpacman->pos().y() + 50);
            cout << "Se estripa S" << endl;

            comerPuntos();
            revisarEnemigos();
        } else {
            //cout << "Hay obsctaculo" << endl;
        }
    }
    if (event->key() == Qt::Key_A) {
        //cout << pacmanX << pacmanY << endl;
        //cout << pacmanX - 1 << pacmanY << endl;
        //cout << mapa[pacmanY][pacmanX - 1] << endl;
        //pacman->setPos(-50,+0);
        if(mapa[pacmanY][pacmanX - 1] == 0) {
            pacmanX -= 1;
            playerpacman->setPos(playerpacman->pos().x() - 50, playerpacman->pos().y());
            cout << "Se estripa A" << endl;

            comerPuntos();
            revisarEnemigos();
        } else {
            //cout << "Hay obstaculo" << endl;
        }
    }
    if (event->key() == Qt::Key_D) {
        //cout << pacmanX << pacmanY << endl;
        //cout << pacmanX + 1 << pacmanY << endl;
        //cout << mapa[pacmanX + 1][pacmanY] << endl;
        if(mapa[pacmanY][pacmanX + 1] == 0) {
            pacmanX += 1;
            playerpacman->setPos(playerpacman->pos().x() + 50, playerpacman->pos().y());
            cout << "Se estripa D" << endl;

            comerPuntos();
            revisarEnemigos();
        } else {
            //cout << "Hay obstaculo" << endl;
        }
    }
}

void Level1::comerPuntos(){
    for(int i = 0; i < puntoslista->lenLista();i++) {
        if (playerpacman->pos() == puntoslista->findPuntos(i)->pos()) {
            cout << "son iguales";
            if (puntoslista->findPuntos(i)->eliminado == false){
                puntoslista->findPuntos(i)->hide();
                puntaje = puntaje + 10;
                if (puntaje%200 == 0){
                    PlacePowerRandomPos();
                }

                labelPuntaje->setText("Puntaje: "+ QString::number(puntaje,10));
                puntoslista->findPuntos(i)->eliminado = true;
                noquedanpuntos = noquedanpuntos +1;
            }
        }
    }
    if (noquedanpuntos >= puntoslista->lenLista()){ //revisa si ya no quedan puntos para comer, pasa de nivel
        nivel = nivel + 1;
        CreateLevels(nivel);
    }
}
void Level1::revisarEnemigos(){
    if (playerpacman->pos() == enemigo1->pos()){
        vidas = vidas - 1;
        labelVidas->setText("Vidas: "+ QString::number(vidas,10));
    }
    if (playerpacman->pos() == enemigo2->pos()){
        vidas = vidas - 1;
        labelVidas->setText("Vidas: "+ QString::number(vidas,10));
    }
    if (playerpacman->pos() == enemigo3->pos()){
        vidas = vidas - 1;
        labelVidas->setText("Vidas: "+ QString::number(vidas,10));
    }
    if (playerpacman->pos() == enemigo4->pos()){
        vidas = vidas - 1;
        labelVidas->setText("Vidas: "+ QString::number(vidas,10));
    }
    if (vidas == 0){ //se pierden todas las vidas
        GameOver *go;
        go = new GameOver();
        this->close();
        revisarChoque -> stop();
        go->show();
    }
}

void Level1::MoveMobile(){
    if(datosSerial.getSize() == 3) {
        cout << "MOVIMIENTO" << endl;
        // Movimiento hacia arriba
        if (datosSerial.getPosVal(2) < -3) {
            if (mapa[pacmanY - 1][pacmanX] == 0) {
                pacmanY -= 1;
                playerpacman->setPos(playerpacman->pos().x(), playerpacman->pos().y() - 50);
                //cout << "Se estripa w" << endl;
                comerPuntos();
                revisarEnemigos();
            }
        } else if (datosSerial.getPosVal(2) > 3) {
            if (mapa[pacmanY + 1][pacmanX] == 0) {
                pacmanY += 1;
                playerpacman->setPos(playerpacman->pos().x(), playerpacman->pos().y() + 50);
                //cout << "Se estripa S" << endl;
                comerPuntos();
                revisarEnemigos();
            }
        } else if (datosSerial.getPosVal(1) < -3) {
            if (mapa[pacmanY][pacmanX - 1] == 0) {
                pacmanX -= 1;
                playerpacman->setPos(playerpacman->pos().x() - 50, playerpacman->pos().y());
                //cout << "Se estripa A" << endl;
                comerPuntos();
                revisarEnemigos();
            }
        } else if (datosSerial.getPosVal(1) > 3) {
            if (mapa[pacmanY][pacmanX + 1] == 0) {
                pacmanX += 1;
                //pacman->setPos(+50,+0);
                playerpacman->setPos(playerpacman->pos().x() + 50, playerpacman->pos().y());
                //cout << "Se estripa D" << endl;
                comerPuntos();
                revisarEnemigos();
            }
        }
    }
}


void Level1::CreateLevels(int lvl){
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

void Level1::MoveFirstEnemy() {
    if (moving1 == false){
        int num = QRandomGenerator::global() -> bounded(0, 4); // escoge numero random del 0 al 3
        if(num == 0){
            // Me quiero mover hacia arriba
            // Tengo que revisar si puedo
            if(mapa[Enemy1Y -  1][Enemy1X] == 0){
                moving1 = true;
                direc1X = 0;
                direc1Y = -1;
            } else {
                return MoveFirstEnemy();
            }
        } else if(num == 1){
            if(mapa[Enemy1Y][Enemy1X + 1] == 0){
                moving1 = true;
                direc1X = 1;
                direc1Y = 0;
            } else {
                return MoveFirstEnemy();
            }

        } else if(num == 2){
            if(mapa[Enemy1Y + 1][Enemy1X] == 0){
                moving1 = true;
                direc1X = 0;
                direc1Y =  1;
            } else {
                return MoveFirstEnemy();
            }

        } else if(num == 3){
            if(mapa[Enemy1Y][Enemy1X - 1] == 0){
                moving1 = true;
                direc1X = -1;
                direc1Y = 0;
            } else {
                return MoveFirstEnemy();
            }
        }
    }
    else {
        if(mapa[Enemy1Y + direc1Y][Enemy1X + direc1X] == 0) {
            //cout << mapa[Enemy1Y + direc1Y][Enemy1X + direc1X] << Enemy1Y + direc1Y << Enemy1X + direc1X << endl;
            Enemy1Y += direc1Y;
            Enemy1X += direc1X;
            enemigo1->setPos(enemigo1->pos().x() + direc1X*50, enemigo1->pos().y() + direc1Y*50);
        } else {
            moving1 = false;
        }
    }
}

void Level1::MoveSecondEnemy() {
    if(moving2 == false){
        int num = QRandomGenerator::global() -> bounded(0, 4); // escoge numero random del 0 al 3
        if(num == 0){
            // Me quiero mover hacia arriba
            // Tengo que revisar si puedo
            if(mapa[Enemy2Y -  1][Enemy2X] == 0){
                moving2 = true;
                direc2X = 0;
                direc2Y = -1;
            } else {
                return MoveSecondEnemy();
            }
        } else if(num == 1){
            if(mapa[Enemy2Y][Enemy2X + 1] == 0){
                moving2 = true;
                direc2X = 1;
                direc2Y = 0;
            } else {
                return MoveSecondEnemy();
            }

        } else if(num == 2){
            if(mapa[Enemy2Y + 1][Enemy2X] == 0){
                moving2 = true;
                direc2X = 0;
                direc2Y =  1;
            } else {
                return MoveSecondEnemy();
            }

        } else if(num == 3){
            if(mapa[Enemy2Y][Enemy2X - 1] == 0){
                moving2 = true;
                direc2X = -1;
                direc2Y = 0;
            } else {
                return MoveSecondEnemy();
            }
        }
    }
    else {
        if(mapa[Enemy2Y + direc2Y][Enemy2X + direc2X] == 0) {
            //cout << mapa[Enemy2Y + direc2Y][Enemy2X + direc2X] << Enemy2Y + direc2Y << Enemy2X + direc2X << endl;
            Enemy2Y += direc2Y;
            Enemy2X += direc2X;
            enemigo2->setPos(enemigo2->pos().x() + direc2X*50, enemigo2->pos().y() + direc2Y*50);
        } else {
            moving2 = false;
        }
    }
}

void Level1::MoveThirdEnemy() {
    if(moving3 == false){
        int num = QRandomGenerator::global() -> bounded(0, 4); // escoge numero random del 0 al 3
        if(num == 0){
            // Me quiero mover hacia arriba
            // Tengo que revisar si puedo
            if(mapa[Enemy3Y -  1][Enemy3X] == 0){
                moving3 = true;
                direc3X = 0;
                direc3Y = -1;
            } else {
                return MoveSecondEnemy();
            }
        } else if(num == 1){
            if(mapa[Enemy3Y][Enemy3X + 1] == 0){
                moving3 = true;
                direc3X = 1;
                direc3Y = 0;
            } else {
                return MoveThirdEnemy();
            }

        } else if(num == 2){
            if(mapa[Enemy3Y + 1][Enemy3X] == 0){
                moving3 = true;
                direc3X = 0;
                direc3Y =  1;
            } else {
                return MoveThirdEnemy();
            }

        } else if(num == 3){
            if(mapa[Enemy3Y][Enemy3X - 1] == 0){
                moving3 = true;
                direc3X = -1;
                direc3Y = 0;
            } else {
                return MoveThirdEnemy();
            }
        }
    }
    else {
        if(mapa[Enemy3Y + direc3Y][Enemy3X + direc3X] == 0) {
            //cout << mapa[Enemy3Y + direc3Y][Enemy3X + direc3X] << Enemy3Y + direc3Y << Enemy3X + direc3X << endl;
            Enemy3Y += direc3Y;
            Enemy3X += direc3X;
            enemigo3->setPos(enemigo3->pos().x() + direc3X*50, enemigo3->pos().y() + direc3Y*50);
        } else {
            moving3 = false;
        }
    }
}

void Level1::MoveFourthEnemy() {
    if(moving4 == false){
        int num = QRandomGenerator::global() -> bounded(0, 4); // escoge numero random del 0 al 3
        if(num == 0){
            // Me quiero mover hacia arriba
            // Tengo que revisar si puedo
            if(mapa[Enemy4Y -  1][Enemy4X] == 0){
                moving4 = true;
                direc4X = 0;
                direc4Y = -1;
            } else {
                return MoveFourthEnemy();
            }
        } else if(num == 1){
            if(mapa[Enemy4Y][Enemy4X + 1] == 0){
                moving4 = true;
                direc4X = 1;
                direc4Y = 0;
            } else {
                return MoveFourthEnemy();
            }

        } else if(num == 2){
            if(mapa[Enemy4Y + 1][Enemy4X] == 0){
                moving4 = true;
                direc4X = 0;
                direc4Y =  1;
            } else {
                return MoveFourthEnemy();
            }

        } else if(num == 3){
            if(mapa[Enemy4Y][Enemy4X - 1] == 0){
                moving4 = true;
                direc4X = -1;
                direc4Y = 0;
            } else {
                return MoveFourthEnemy();
            }
        }
    }
    else {
        if(mapa[Enemy4Y + direc4Y][Enemy4X + direc4X] == 0) {
            //cout << mapa[Enemy3Y + direc3Y][Enemy3X + direc3X] << Enemy3Y + direc3Y << Enemy3X + direc3X << endl;
            Enemy4Y += direc4Y;
            Enemy4X += direc4X;
            enemigo4->setPos(enemigo4->pos().x() + direc4X*50, enemigo4->pos().y() + direc4Y*50);
        } else {
            moving4 = false;
        }
    }
}


void Level1::SocketServer() {
    //datosSerial.printList();
    while(datosSerial.getSize() != 0){
        datosSerial.deleteHead();
    }
    int server_fd, new_socket;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);

    // Crear socket
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        std::cerr << "Error al crear socket" << std::endl;
        return;
    }

    // Opción de socket para reutilizar la dirección
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt))) {
        std::cerr << "Error en setsockopt" << std::endl;
        return;
    }

    // Configurar dirección del socket
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(5001);

    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEPORT, &opt, sizeof(opt))) {
        std::cerr << "Error en setsockopt" << std::endl;
        return;
    }


    // Enlazar socket a la dirección y puerto especificados
    if (bind(server_fd, (struct sockaddr *) &address, sizeof(address)) < 0) {
        std::cerr << "Error en bind" << std::endl;
        return;
    }

    // Escuchar conexiones entrantes
    if (listen(server_fd, 3) < 0) {
        std::cerr << "Error en listen" << std::endl;
        return;
    }

    //std::cout << "Servidor en espera de conexiones..." << std::endl;


    // Aceptar nueva conexión
    if ((new_socket = accept(server_fd, (struct sockaddr *) &address, (socklen_t *) &addrlen)) < 0) {
        std::cerr << "Error en accept" << std::endl;
        return;
    }

    std::cout << "Nueva conexión aceptada" << std::endl;

    // Procesar mensajes entrantes
    char buffer[1024] = {0};
    int valread = read(new_socket, buffer, 1024);
    if (valread <= 0) {
        //std::cout << "Cliente desconectado" << std::endl;
        ::close(new_socket);
        return;
    }
    //std::cout << "Mensaje recibido: " << buffer << std::endl;
    QStringList subStrings = QString(buffer).split(" ,");
    for(const QString& subString : subStrings){
        bool ok = false;
        int value = subString.trimmed().toFloat(&ok);
        if (ok) {
            datosSerial.insertHead(value);
        }
    }

    char respuesta[] = "Mensaje recibido.\n";
    send(new_socket, respuesta, sizeof(respuesta), 0);
    //std::cout << "Respuesta: " << respuesta << std::endl;


    if (::close(server_fd) == -1) {
        std::cerr << "Error al cerrar el socket: " << std::strerror(errno) << std::endl;
        return;
    }
    if (::close(new_socket) == -1) {
        std::cerr << "Error al cerrar el socket: " << std::strerror(errno) << std::endl;
        return;
    }
}


void Level1::PlacePowerRandomPos(){
    isTherePower = true;
    int colum = QRandomGenerator::global() -> bounded(0, 12);
    int fila = QRandomGenerator::global() -> bounded(0, 18);
    if(mapa[colum][fila] == 0){
        powerX = fila;
        powerY = colum;
        poder -> setPos((fila)*50, (colum)*50);
        PathfindingA(Enemy1X, Enemy1Y, powerX, powerY);
    } else {
        return PlacePowerRandomPos();
    }
}

void Level1::PathfindingA(int beginX, int beginY, int endX, int endY){
    //SimpleList<int> numeracionCasillas;
    SimpleList<SimpleList<int>> whereICome;
    SimpleList<SimpleList<int>> hCasillas;
    SimpleList<SimpleList<int>> fCasillas;
    SimpleList<SimpleList<int>> completeCasillas;
    SimpleList<SimpleList<int>> openList;
    SimpleList<SimpleList<int>> closedList;

    SimpleList<int> initialVal;
    initialVal.insertHead(beginX);
    initialVal.insertHead(beginY);

    closedList.insertHead(initialVal);

    SimpleList<int> open1;
    SimpleList<int> open2;
    SimpleList<int> open3;
    SimpleList<int> open4;
    SimpleList<int> open5;
    SimpleList<int> open6;
    SimpleList<int> open7;
    SimpleList<int> open8;


    open1.insertHead(beginX + 1);
    open1.insertHead(beginY);
    open2.insertHead(beginX - 1);
    open2.insertHead(beginY);
    open3.insertHead(beginX);
    open3.insertHead(beginY - 1);
    open4.insertHead(beginX);
    open4.insertHead(beginY + 1);

    open5.insertHead(beginX - 1);
    open5.insertHead(beginY - 1);
    open6.insertHead(beginX + 1);
    open6.insertHead(beginY - 1);
    open7.insertHead(beginX + 1);
    open7.insertHead(beginY + 1);
    open8.insertHead(beginX - 1);
    open8.insertHead(beginY + 1);

    openList.insertHead(open1);
    openList.insertHead(open2);
    openList.insertHead(open3);
    openList.insertHead(open4);
    openList.insertHead(open5);
    openList.insertHead(open6);
    openList.insertHead(open7);
    openList.insertHead(open8);




    bool haveFound;
    haveFound = false;



    for(int i = 0; i < 12; i++){
        SimpleList<int> col;
        for(int w = 0; w < 18; w++){
            col.insertHead(-1);
        }
        whereICome.insertHead(col);
    }


    for(int w = 0; w < 12; w++){
        SimpleList<int> col;
        for(int z = 0; z < 18; z++){
            col.insertHead(0);
        }
        fCasillas.insertHead(col);
    }


    for(int i = 0; i < 12; i++){
        SimpleList<int> col;
        for(int k = 0; k < 18; k++){
            col.insertHead(0);
        }
        completeCasillas.insertHead(col);
    }


    // Primero se tiene que calcular el valor de H para cada casilla
    for(int i = 0; i < 12; i++){
        SimpleList<int> columna;
        for(int k = 0; i < 18; i++){
            int H = abs(endX - beginX) + abs(endY - beginY);
            columna.insertHead(H);
        }
        hCasillas.insertHead(columna);
    }

    while(haveFound == false){
        // Se revisa si se selecciono alguna casilla adyacente
        for(int i = 0; i < closedList.getSize(); i++){
            int valX = closedList.getPosVal(i).getPosVal(0);
            int valY = closedList.getPosVal(i).getPosVal(1);
            if(hCasillas.getPosVal(valY).getPosVal(valX) == 1){
                haveFound = true;
            }
        }


        // Comienza la implementacion del algoritmo

        //Primero se va a revisar dentro de los valores que estan en OpenList
        // Cual tiene el valor mas pequeño
        int tempSmall = 10000;
        int selecTempX;
        int selecTempY;
        for(int i = 0; i < openList.getSize(); i++){
            int tempValX = openList.getPosVal(i).getPosVal(0);
            int tempValY = openList.getPosVal(i).getPosVal(1);
            if(hCasillas.getPosVal(tempValY).getPosVal(tempValX) < tempSmall){
                tempSmall = hCasillas.getPosVal(tempValY).getPosVal(tempValX);
                selecTempX = tempValX;
                selecTempY = tempValY;
            }
        }
        cout << beginX << " begin " << beginY << endl;
        cout << endX << " end " << endY << endl;
        cout << selecTempX << " " << selecTempY << endl;
        // De los que estan en el open list ya se tiene el val mas pequeno
        // Cunado se tiene el mas pequeño, se quita de open list y se agrega a closed list
        for(int i = 0; i < openList.getSize(); i++){
            if(selecTempX == openList.getPosVal(i).getPosVal(0) && selecTempY == openList.getPosVal(i).getPosVal(0)){
                openList.deletePos(i);
                SimpleList<int> vec;
                vec.insertHead(selecTempX);
                vec.insertHead(selecTempY);
                closedList.insertHead(vec);
            }
        }


    haveFound = true;


    }


};







