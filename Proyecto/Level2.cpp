//
// Created by monicaegm on 5/14/23.
//

#include <QTimer>
#include <QGraphicsRectItem>
#include <QRandomGenerator>
#include <QWidget>
#include <QtWidgets>
#include <QLabel>
#include <string>
#include <iostream>
#include "Cell.h"
#include "Enemigo1.h"
#include "Puntos.h"
#include "GameFinished.h"
#include "GameOver.h"
#include "Level2.h"
#include "Level3.h"
#include "Level1.h"
#include "SocketThread2.h"

#include <cstring>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <QObject>
#include <QThread>

using namespace std;

Level2::Level2(QWidget * parent){
    QGraphicsScene *scene = new QGraphicsScene(); // Se crea la escena
    scene -> setSceneRect(0, 0, 900, 600);

    puntoslista = new puntosLista();
    isPowerActivated = false;
/*
    for(int i = 0; i < 12; i++){
        SimpleList<SimpleList<int>> fila;
        for(int j = 0; j < 18; j++){
            SimpleList<int> informacion;
            fila.insertHead(informacion);
        }
        matriz.insertHead(fila);
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
*/
    cout << mapa[7][9] << endl;

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(900, 600);

    show();
}
void Level2::CreateMap() {
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
void Level2::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_K) { //La letra K crea nuevos niveles
        movementPacmanMobile->stop();
        exeMovementPacmanMobile->stop();


        nivel = nivel + 1;

        Level3 *level3;
        level3 = new Level3();
        level3 -> setValues(puntaje, vidas, nivel);

        level3 -> show();
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
        comerPoderes();
        if(mapa[pacmanY - 1][pacmanX] == 0) {
            pacmanY -= 1;
            playerpacman->setPos(playerpacman->pos().x(), playerpacman->pos().y() - 50);
            cout << "Se estripa w" << endl;

            comerPuntos();
            revisarEnemigos();
        } else {
            cout << "Hay obstaculo" << endl;
        }
    }
    if (event->key() == Qt::Key_S) {
        comerPoderes();
        if(mapa[pacmanY + 1][pacmanX] == 0) {
            pacmanY += 1;
            playerpacman->setPos(playerpacman->pos().x(), playerpacman->pos().y() + 50);
            cout << "Se estripa S" << endl;

            comerPuntos();
            revisarEnemigos();
        } else {
            cout << "Hay obsctaculo" << endl;
        }
    }
    if (event->key() == Qt::Key_A) {
        comerPoderes();
        cout << pacmanX << pacmanY << endl;
        cout << pacmanX - 1 << pacmanY << endl;
        cout << mapa[pacmanY][pacmanX - 1] << endl;
        //pacman->setPos(-50,+0);
        if(mapa[pacmanY][pacmanX - 1] == 0) {
            pacmanX -= 1;
            playerpacman->setPos(playerpacman->pos().x() - 50, playerpacman->pos().y());
            cout << "Se estripa A" << endl;

            comerPuntos();
            revisarEnemigos();
        } else {
            cout << "Hay obstaculo" << endl;
        }
    }
    if (event->key() == Qt::Key_D) {
        comerPoderes();
        cout << pacmanX << pacmanY << endl;
        cout << pacmanX + 1 << pacmanY << endl;
        cout << mapa[pacmanX + 1][pacmanY] << endl;
        if(mapa[pacmanY][pacmanX + 1] == 0) {
            pacmanX += 1;
            playerpacman->setPos(playerpacman->pos().x() + 50, playerpacman->pos().y());
            cout << "Se estripa D" << endl;

            comerPuntos();
            revisarEnemigos();
        } else {
        }
    }
}

void Level2::comerPuntos(){
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
void Level2::revisarEnemigos(){
    if(isPowerActivated == false) {
        if (playerpacman->pos() == enemigo1->pos()) {
            vidas = vidas - 1;
            labelVidas->setText("Vidas: " + QString::number(vidas, 10));
            bool haveMoveIt;
            haveMoveIt = false;
            while(haveMoveIt == false){
                int tryY = QRandomGenerator::global() -> bounded(0, 12);
                int tryX = QRandomGenerator::global() -> bounded(0, 18);
                if(mapa[tryY][tryX] == 0){
                    playerpacman ->setPos(tryX*50, tryY*50);
                    pacmanX = tryX;
                    pacmanY = tryY;
                    haveMoveIt = true;
                }
            }
        }
        if (playerpacman->pos() == enemigo2->pos()) {
            vidas = vidas - 1;
            labelVidas->setText("Vidas: " + QString::number(vidas, 10));
            bool haveMoveIt;
            haveMoveIt = false;
            while(haveMoveIt == false){
                int tryY = QRandomGenerator::global() -> bounded(0, 12);
                int tryX = QRandomGenerator::global() -> bounded(0, 18);
                if(mapa[tryY][tryX] == 0){
                    playerpacman ->setPos(tryX*50, tryY*50);
                    pacmanX = tryX;
                    pacmanY = tryY;
                    haveMoveIt = true;
                }
            }
        }

        if (vidas == 0) { //se pierden todas las vidas
            GameOver *go;
            go = new GameOver();
            this->close();
            revisarChoque->stop();
            go->show();
        }
    } else if (isPowerActivated) {
        if (playerpacman->pos() == enemigo1->pos()) {
            puntaje += 50;
            //Hay que desaparecer el enemigo y aparecerlo en un lugar random
            bool hasPositionedIt;
            hasPositionedIt = false;
            while(hasPositionedIt == false){
                int tryPosX = QRandomGenerator::global() -> bounded(0, 18);
                int tryPosY = QRandomGenerator::global() -> bounded(0, 12);
                if(mapa[tryPosY][tryPosX] == 0){
                    Enemy1X = tryPosX;
                    Enemy1Y = tryPosY;
                    enemigo1 -> setPos(tryPosX*50, tryPosY*50);
                    hasPositionedIt = true;
                }
            }
        }
        if (playerpacman->pos() == enemigo2->pos()) {
            puntaje += 50;
            //Hay que desaparecer el enemigo y aparecerlo en un lugar random
            bool hasPositionedIt;
            hasPositionedIt = false;
            while(hasPositionedIt == false){
                int tryPosX = QRandomGenerator::global() -> bounded(0, 18);
                int tryPosY = QRandomGenerator::global() -> bounded(0, 12);
                if(mapa[tryPosY][tryPosX] == 0){
                    Enemy2X = tryPosX;
                    Enemy2Y = tryPosY;
                    enemigo2 -> setPos(tryPosX*50, tryPosY*50);
                    hasPositionedIt = true;
                }
            }
        }
    }
}

void Level2::CreateLevels(int lvl){
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

void Level2::MoveFirstEnemy() {
    if (isSearchingPower == false) {
        if (moving1 == false) {
            int num = QRandomGenerator::global()->bounded(0, 4); // escoge numero random del 0 al 3
            if (num == 0) {
                // Me quiero mover hacia arriba
                // Tengo que revisar si puedo
                if (mapa[Enemy1Y - 1][Enemy1X] == 0) {
                    moving1 = true;
                    direc1X = 0;
                    direc1Y = -1;
                } else {
                    return MoveFirstEnemy();
                }
            } else if (num == 1) {
                if (mapa[Enemy1Y][Enemy1X + 1] == 0) {
                    moving1 = true;
                    direc1X = 1;
                    direc1Y = 0;
                } else {
                    return MoveFirstEnemy();
                }

            } else if (num == 2) {
                if (mapa[Enemy1Y + 1][Enemy1X] == 0) {
                    moving1 = true;
                    direc1X = 0;
                    direc1Y = 1;
                } else {
                    return MoveFirstEnemy();
                }

            } else if (num == 3) {
                if (mapa[Enemy1Y][Enemy1X - 1] == 0) {
                    moving1 = true;
                    direc1X = -1;
                    direc1Y = 0;
                } else {
                    return MoveFirstEnemy();
                }
            }
        } else {
            if (mapa[Enemy1Y + direc1Y][Enemy1X + direc1X] == 0) {
                cout << mapa[Enemy1Y + direc1Y][Enemy1X + direc1X] << Enemy1Y + direc1Y << Enemy1X + direc1X << endl;
                Enemy1Y += direc1Y;
                Enemy1X += direc1X;
                enemigo1->setPos(enemigo1->pos().x() + direc1X * 50, enemigo1->pos().y() + direc1Y * 50);
            } else {
                moving1 = false;
            }
        }
    } else if (isSearchingPower){
        for(int i = 0; i < route1.getSize(); i++){
            enemigo1 -> setPos(route1.getPosVal(i).getPosVal(0)*50, route1.getPosVal(i).getPosVal(1)*50);
            Enemy1X = route1.getPosVal(i).getPosVal(0);
            Enemy1Y = route1.getPosVal(i).getPosVal(1);
        }
        if(route1.getSize() != 0){
            enemigo1 -> setPos(route1.getPosVal(0).getPosVal(0)*50, route1.getPosVal(0).getPosVal(1)*50);
            Enemy1X = route1.getPosVal(0).getPosVal(0);
            Enemy1Y = route1.getPosVal(0).getPosVal(1);
            route1.deletePos(0);
        }
        if(route1.getSize() == 0) {
            comerPoderes();
            isSearchingPower = false;
        }
    }
}

void Level2::MoveSecondEnemy() {
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
            cout << mapa[Enemy2Y + direc2Y][Enemy2X + direc2X] << Enemy2Y + direc2Y << Enemy2X + direc2X << endl;
            Enemy2Y += direc2Y;
            Enemy2X += direc2X;
            enemigo2->setPos(enemigo2->pos().x() + direc2X*50, enemigo2->pos().y() + direc2Y*50);
        } else {
            moving2 = false;
        }
    }
}



void Level2::setValues(int p, int v, int n){
    this-> puntaje = p;
    this-> vidas = v;
    this-> nivel = n;

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

    CreateLevels(nivel);

    isSearchingPower = false;
    playerpacman = new PlayerPacman();
    playerpacman -> setPos(400, 300);
    scene() -> addItem(playerpacman);
    pacmanX = 8;
    pacmanY = 6;

    Enemy1X = 7;
    Enemy1Y = 10;

    Enemy2X = 8;
    Enemy2Y = 10;


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
    scene() -> addItem(enemigo1);

    enemigo2 = new Enemigo2();
    enemigo2 -> setPos(400, 500);
    scene() -> addItem(enemigo2);


    poder = new PastillaPoder();
    poder -> setPos(-50, -50);
    scene() -> addItem(poder);


    movementFirstEnemy = new QTimer(this);
    connect(movementFirstEnemy, &QTimer::timeout, this, &Level2::MoveFirstEnemy);
    movementFirstEnemy ->setInterval(500);
    movementFirstEnemy -> start();

    movementSecondEnemy = new QTimer(this);
    connect(movementSecondEnemy, &QTimer::timeout, this, &Level2::MoveSecondEnemy);
    movementSecondEnemy ->setInterval(500);
    movementSecondEnemy -> start();


    revisarChoque = new QTimer(this);
    connect(revisarChoque, &QTimer::timeout, this, &Level2::revisarEnemigos);
    revisarChoque -> setInterval(500);
    revisarChoque -> start();

    movementPacmanMobile = new QTimer(this);
    connect(movementPacmanMobile, &QTimer::timeout, this, &Level2::startSocketServer);
    movementPacmanMobile -> setInterval(500);
    movementPacmanMobile -> start();

    exeMovementPacmanMobile = new QTimer(this);
    connect(exeMovementPacmanMobile, &QTimer::timeout, this, &Level2::MoveMobile);
    exeMovementPacmanMobile -> setInterval(500);
    exeMovementPacmanMobile -> start();

    setScene(scene());
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(900, 600);


}


void Level2::MoveMobile(){
    if(datosSerial.getSize() == 3) {
        comerPoderes();
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
            comerPoderes();
            if (mapa[pacmanY + 1][pacmanX] == 0) {
                pacmanY += 1;
                playerpacman->setPos(playerpacman->pos().x(), playerpacman->pos().y() + 50);
                //cout << "Se estripa S" << endl;
                comerPuntos();
                revisarEnemigos();
            }
        } else if (datosSerial.getPosVal(1) < -3) {
            comerPoderes();
            if (mapa[pacmanY][pacmanX - 1] == 0) {
                pacmanX -= 1;
                playerpacman->setPos(playerpacman->pos().x() - 50, playerpacman->pos().y());
                //cout << "Se estripa A" << endl;
                comerPuntos();
                revisarEnemigos();
            }
        } else if (datosSerial.getPosVal(1) > 3) {
            comerPoderes();
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

void Level2::startSocketServer(){
    SocketThread2* socketThread = new SocketThread2(this);
    connect(socketThread, &SocketThread2::finished, socketThread, &SocketThread2::deleteLater);
    socketThread -> start();
}


void Level2::SocketServer() {
    datosSerial.printList();
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

    std::cout << "Servidor en espera de conexiones..." << std::endl;


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
        std::cout << "Cliente desconectado" << std::endl;
        ::close(new_socket);
        return;
    }
    std::cout << "Mensaje recibido: " << buffer << std::endl;
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
    std::cout << "Respuesta: " << respuesta << std::endl;


    if (::close(server_fd) == -1) {
        std::cerr << "Error al cerrar el socket: " << std::strerror(errno) << std::endl;
        return;
    }
    if (::close(new_socket) == -1) {
        std::cerr << "Error al cerrar el socket: " << std::strerror(errno) << std::endl;
        return;
    }
}

void Level2::PlacePowerRandomPos(){
    isTherePower = true;
    int colum = QRandomGenerator::global() -> bounded(0, 12);
    int fila = QRandomGenerator::global() -> bounded(0, 18);
    if(mapa[colum][fila] == 0){
        powerX = fila;
        powerY = colum;
        poder -> setPos((fila)*50, (colum)*50);
        route1 = PathfindingA(Enemy1X, Enemy1Y, powerX, powerY);
        isSearchingPower = true;
    } else {
        return PlacePowerRandomPos();
    }
}
void Level2::comerPoderes() {
    if (isTherePower) {
        if (Enemy1X == powerX && Enemy1Y == powerY) {
            poder->setPos(-50, -50);
            powerX = -1;
            powerY = -1;
            // El enemigo se comio el poder
        }
        if (pacmanX == powerX && pacmanY == powerY) {
            poder->setPos(-50, -50);
            powerX = -1;
            powerY = -1;
            cout << "El pacman llego al poder" << endl;
            // Ahora por 5 segundos se tiene que ejecutar lo de que el compita persiga a los enemigos
            QTimer::singleShot(5000, this, &Level2::pararEjecucion);
            //revisarChoque -> stop();
            // Ya con esto por 5 segundos se para lo de quitar vidas
            isPowerActivated = true;
        }
    }
}

void Level2::pararEjecucion(){
    isPowerActivated = false;
}

SimpleList<SimpleList<int>> Level2::PathfindingA(int beginX, int beginY, int endX, int endY){
    //SimpleList<int> numeracionCasillas;
    cout << "\n" << endl;
    cout << beginX << " " << beginY << endl;
    cout << endX << " " << endY << endl;


    SimpleList<SimpleList<int>> path;
    SimpleList<SimpleList<int>> hCasillas;
    SimpleList<SimpleList<int>> fCasillas;
    SimpleList<SimpleList<int>> completeCasillas;
    SimpleList<SimpleList<int>> openList;
    SimpleList<SimpleList<int>> closedList;

    bool isRunning = true;

    SimpleList<int> begginCoordinates;
    begginCoordinates.insertEnd(beginX);
    begginCoordinates.insertEnd(beginY);
    path.insertEnd(begginCoordinates);

    // Primero se tiene que calcular el valor de H para cada casilla
    for(int i = 0; i < 12; i++){
        SimpleList<int> columna;
        for(int k = 0; k < 18; k++){
            int H = abs(endX - k) + abs(endY - i);
            //cout << i << " " << k << endl;
            //cout << H << endl;
            columna.insertEnd(H);
        }
        //cout << "Se incerta fila" << endl;
        hCasillas.insertEnd(columna);
    }

    // Se verifico que esto esta bien implementado
    /*
    for(int i = 0; i < 12; i++){
        for(int k = 0; k < 18; k++){
            cout << hCasillas.getPosVal(i).getPosVal(k) << endl;
        }
        cout << "FIN DE LA FILA" << endl;
    }
    */

    // Una ves calculado el valor de H nada mas se van a llenar las otras listas
    // De numeros arbitrarios

    for(int i = 0; i < 12; i++){
        SimpleList<int> columna;
        for(int k = 0; k < 18; k++){
            columna.insertEnd(0);
        }
        fCasillas.insertEnd(columna);
    }

    for(int i = 0; i < 12; i++){
        SimpleList<int> columna;
        for(int k = 0; k < 18; k++){
            columna.insertEnd(1000000);
        }
        completeCasillas.insertEnd(columna);
    }
    // Una ves hecho esto, se va a poner el punto de inicio en openList
    SimpleList<int> puntoInicio;
    puntoInicio.insertEnd(beginX);
    puntoInicio.insertEnd(beginY);

    openList.insertEnd(puntoInicio);

    completeCasillas.getPosVal(beginY).modPos(beginX, 0);

    // A partir de esto se puede comenzar la ejecucion
    // Se tiene que implementar que se revisen las casillas adyacentes
    while(isRunning){
        // Lo primero que quiero hacer es obtener el valor mas pequeño del openList
        int tempLess = 10000000;
        int selecOpenX;
        int selecOpenY;

        for(int i = 0; i < openList.getSize(); i++){
            int tempLessX = openList.getPosVal(i).getPosVal(0);
            int tempLessY = openList.getPosVal(i).getPosVal(1);
            if(completeCasillas.getPosVal(tempLessY).getPosVal(tempLessX) < tempLess){
                tempLess = completeCasillas.getPosVal(tempLessY).getPosVal(tempLessX);
                selecOpenX = tempLessX;
                selecOpenY = tempLessY;
            }
        }

        // Esto funciono bien
        //cout << selecOpenX << " seleccion " << selecOpenY << endl;


        // Una ves realizado esto es necesaario buscar en las casillas adyacentes disponibles
        // Como las figuras solamente tienen permitido moverse arriba abajo izquierda derecha
        // No se evaluaran diagonales en el proceso

        // Hay que verificar dos cosas
        // 1. que no haya pared
        // 2. que no este seleccionada previamente
        // Despues de hacer eso los que estan disponibles se meten en open list
        // Ademas de eso la casilla seleccionada se debe de meter en closedList

        // Revisando arriba
        if (mapa[selecOpenY - 1][selecOpenX] == 0){
            bool checkClosed = false;
            for(int i = 0; i < closedList.getSize(); i++){
                int tempCheckClosedX = closedList.getPosVal(i).getPosVal(0);
                int tempCheckClosedY = closedList.getPosVal(i).getPosVal(1);
                if(tempCheckClosedX == selecOpenX && tempCheckClosedY == (selecOpenY-1)){
                    checkClosed = true;
                }
            }
            if(checkClosed == false){
                //Llegados a este punto es que no estaba dentro de las que habian sido seleccionadas antes
                // Primero esto se mete en open list
                SimpleList<int> nuevaEvaluacion;
                nuevaEvaluacion.insertEnd(selecOpenX);
                nuevaEvaluacion.insertEnd(selecOpenY - 1);
                openList.insertEnd(nuevaEvaluacion);
                // Ahora se tiene que modificar el valor de FCasillas
                int valCal = fCasillas.getPosVal(selecOpenY).getPosVal(selecOpenX) + 10;
                fCasillas.getPosVal(selecOpenY - 1).modPos(selecOpenX, valCal);
                // Una ves modificado el valor de fCasillas
                // Se modifica el valor de completeCasillas
                int hTempValue = hCasillas.getPosVal(selecOpenY - 1).getPosVal(selecOpenX);
                completeCasillas.getPosVal(selecOpenY - 1).modPos(selecOpenX, valCal + hTempValue);
            }



        }
        // Caso de derecha
        if (mapa[selecOpenY][selecOpenX + 1] == 0){
            bool checkClosed = false;
            for(int i = 0; i < closedList.getSize(); i++){
                int tempCheckClosedX = closedList.getPosVal(i).getPosVal(0);
                int tempCheckClosedY = closedList.getPosVal(i).getPosVal(1);
                if(tempCheckClosedX == (selecOpenX + 1) && tempCheckClosedY == selecOpenY){
                    checkClosed = true;
                }
            }
            if(checkClosed == false){
                //Llegados a este punto es que no estaba dentro de las que habian sido seleccionadas antes
                // Primero esto se mete en open list
                SimpleList<int> nuevaEvaluacion;
                nuevaEvaluacion.insertEnd(selecOpenX+1);
                nuevaEvaluacion.insertEnd(selecOpenY);
                openList.insertEnd(nuevaEvaluacion);
                // Ahora se tiene que modificar el valor de FCasillas
                int valCal = fCasillas.getPosVal(selecOpenY).getPosVal(selecOpenX) + 10;
                fCasillas.getPosVal(selecOpenY).modPos(selecOpenX + 1, valCal);
                // Una ves modificado el valor de fCasillas
                // Se modifica el valor de completeCasillas
                int hTempValue = hCasillas.getPosVal(selecOpenY).getPosVal(selecOpenX + 1);
                completeCasillas.getPosVal(selecOpenY).modPos(selecOpenX + 1, valCal + hTempValue);
            }



        }

        //Se implementa izquierda
        if (mapa[selecOpenY][selecOpenX - 1] == 0){
            bool checkClosed = false;
            for(int i = 0; i < closedList.getSize(); i++){
                int tempCheckClosedX = closedList.getPosVal(i).getPosVal(0);
                int tempCheckClosedY = closedList.getPosVal(i).getPosVal(1);
                if(tempCheckClosedX == (selecOpenX - 1) && tempCheckClosedY == selecOpenY){
                    checkClosed = true;
                }
            }
            if(checkClosed == false){
                //Llegados a este punto es que no estaba dentro de las que habian sido seleccionadas antes
                // Primero esto se mete en open list
                SimpleList<int> nuevaEvaluacion;
                nuevaEvaluacion.insertEnd(selecOpenX-1);
                nuevaEvaluacion.insertEnd(selecOpenY);
                openList.insertEnd(nuevaEvaluacion);
                // Ahora se tiene que modificar el valor de FCasillas
                int valCal = fCasillas.getPosVal(selecOpenY).getPosVal(selecOpenX) + 10;
                fCasillas.getPosVal(selecOpenY).modPos(selecOpenX - 1, valCal);
                // Una ves modificado el valor de fCasillas
                // Se modifica el valor de completeCasillas
                int hTempValue = hCasillas.getPosVal(selecOpenY).getPosVal(selecOpenX - 1);
                completeCasillas.getPosVal(selecOpenY).modPos(selecOpenX - 1, valCal + hTempValue);
            }



        }
        // Revisando abajo
        if (mapa[selecOpenY + 1][selecOpenX] == 0){
            bool checkClosed = false;
            for(int i = 0; i < closedList.getSize(); i++){
                int tempCheckClosedX = closedList.getPosVal(i).getPosVal(0);
                int tempCheckClosedY = closedList.getPosVal(i).getPosVal(1);
                if(tempCheckClosedX == selecOpenX && tempCheckClosedY == (selecOpenY+1)){
                    checkClosed = true;
                }
            }
            if(checkClosed == false){
                //Llegados a este punto es que no estaba dentro de las que habian sido seleccionadas antes
                // Primero esto se mete en open list
                SimpleList<int> nuevaEvaluacion;
                nuevaEvaluacion.insertEnd(selecOpenX);
                nuevaEvaluacion.insertEnd(selecOpenY + 1);
                openList.insertEnd(nuevaEvaluacion);
                // Ahora se tiene que modificar el valor de FCasillas
                int valCal = fCasillas.getPosVal(selecOpenY).getPosVal(selecOpenX) + 10;
                fCasillas.getPosVal(selecOpenY + 1).modPos(selecOpenX, valCal);
                // Una ves modificado el valor de fCasillas
                // Se modifica el valor de completeCasillas
                int hTempValue = hCasillas.getPosVal(selecOpenY + 1).getPosVal(selecOpenX);
                completeCasillas.getPosVal(selecOpenY + 1).modPos(selecOpenX, valCal + hTempValue);
            }



        }



        // Se tiene que quitar el valor de SelecOpenY y SelecOpenX de la open y mandarlo a la closed
        for(int i = 0; i < openList.getSize(); i++){
            int tempCheckOpenX = openList.getPosVal(i).getPosVal(0);
            int tempCheckOpenY = openList.getPosVal(i).getPosVal(1);
            if(tempCheckOpenX == selecOpenX && tempCheckOpenY == selecOpenY){
                openList.deletePos(i);
            }
            SimpleList<int> closedVec;
            closedVec.insertEnd(tempCheckOpenX);
            closedVec.insertEnd(tempCheckOpenY);
            closedList.insertEnd(closedVec);
        }

        for(int i = 0; i < openList.getSize(); i++){
            cout << "Open List vec " << endl;
            openList.getPosVal(i).printList();
        }
        for(int i = 0; i < closedList.getSize(); i++){
            cout << "Closed List vec " << endl;
            closedList.getPosVal(i).printList();
        }
        for(int i = 0; i < fCasillas.getSize(); i++){
            fCasillas.getPosVal(i).printList();
        }
        for(int i = 0; i < completeCasillas.getSize(); i++){
            completeCasillas.getPosVal(i).printList();
        }


        //isRunning = false;
        for(int i = 0; i < closedList.getSize(); i++){

            int tempCheckEndX = closedList.getPosVal(i).getPosVal(0);
            int tempCheckEndY = closedList.getPosVal(i).getPosVal(1);
            if(hCasillas.getPosVal(tempCheckEndY).getPosVal(tempCheckEndX) == 1){
                // Aqui deberia de hacer un metodo que consiga el camino
                SimpleList<SimpleList<int>> temp;
                temp = FindPath(
                        completeCasillas,
                        hCasillas,
                        beginX,
                        beginY,
                        endX,
                        endY
                );

                cout << "LISTA FINAL" << endl;
                cout << beginX << " Comienzo de la esto " << beginY << endl;
                cout << endX << " Fin de la esto " << endY << endl;
                for(int i = 0; i < temp.getSize(); i++){
                    temp.getPosVal(i).printList();
                }


                isRunning = false;
                return temp;
            }
        }
    }
};


SimpleList<SimpleList<int>> Level2::FindPath(SimpleList<SimpleList<int>> completeCasillas, SimpleList<SimpleList<int>> hCasillas, int beginX, int beginY, int endX, int endY){
    SimpleList<SimpleList<int>> finalPath;
    SimpleList<SimpleList<int>> paths;
    bool continueSearching;
    int tempX;
    int tempY;
    tempX = endX;
    tempY = endY;

    while(continueSearching){
        int smallestValue;
        int tempSelectionX;
        int tempSelectionY;
        smallestValue = 10000;

        //Arriba
        if(completeCasillas.getPosVal(tempY - 1).getPosVal(tempX) < smallestValue){
            // mimomimo
            smallestValue = completeCasillas.getPosVal(tempY - 1).getPosVal(tempX);
            tempSelectionX = tempX;
            tempSelectionY = tempY - 1;
        }
        //Abajo
        if(completeCasillas.getPosVal(tempY + 1).getPosVal(tempX) < smallestValue){
            // mimomimo
            smallestValue = completeCasillas.getPosVal(tempY + 1).getPosVal(tempX);
            tempSelectionX = tempX;
            tempSelectionY = tempY + 1;
        }

        // Izquierda
        if(completeCasillas.getPosVal(tempY).getPosVal(tempX - 1) < smallestValue){
            // mimomimo
            smallestValue = completeCasillas.getPosVal(tempY).getPosVal(tempX - 1);
            tempSelectionX = tempX - 1;
            tempSelectionY = tempY;
        }

        // Derecha
        if(completeCasillas.getPosVal(tempY).getPosVal(tempX + 1) < smallestValue){
            // mimomimo
            smallestValue = completeCasillas.getPosVal(tempY).getPosVal(tempX + 1);
            tempSelectionX = tempX + 1;
            tempSelectionY = tempY;
        }

        SimpleList<int> pathVec;
        pathVec.insertEnd(tempSelectionX);
        pathVec.insertEnd(tempSelectionY);
        finalPath.insertHead(pathVec);

        tempY = tempSelectionY;
        tempX = tempSelectionX;

        if(tempY == beginY && tempX == beginX){
            SimpleList<int> endVec;
            endVec.insertEnd(endX);
            endVec.insertEnd(endY);
            finalPath.insertEnd(endVec);
            continueSearching = false;
            return finalPath;
        }
    }

}

