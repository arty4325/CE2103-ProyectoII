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

using namespace std;

GameWindow::GameWindow(QWidget * parent){
    cout<<"ventana";
    QGraphicsScene *scene = new QGraphicsScene(); // Se crea la escena
    scene -> setSceneRect(0, 0, 900, 600);

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(900, 600);

    CreateLevels(1);

    show();
}
void GameWindow::CreateMap(){
    int ypos = 0;
    int xpos = 7;

    for(int i = 0; i < this->pattern.length(); i++) {
        QChar c = this->pattern.at(i);
        qDebug()<<"c ="<< c;
        if (c == "n"){
            ypos = ypos + 50;
            xpos = 0;
        }
        if(c == "0"){
            Cell *cell = new Cell(0);
            cell->setPos(xpos,ypos);
            scene() ->addItem(cell);
            xpos = xpos + 50;
        }
        if (c == "1"){
            Cell *cell = new Cell(1);
            cell->setPos(xpos,ypos);
            scene() ->addItem(cell);
            xpos = xpos + 50;
            }
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
            this-> pattern = "111111111111111111n100000001100000001n100110001100011001n100010001100010001n100010001100010001n100111000000111001n110001110011100011n111100100001001111n100001111111100001n101101100001101101n101000000000000101n111111111111111111";
            CreateMap();
            break;
        }
        case 3:{
            this-> pattern ="111111111111111111n100001001100100001n111000000000000111n100001110011100001n101100100001001101n100001100001100001n110001101101100011n111100001100001111n100001111111100001n101100100001001101n100000000000000001n111111111111111111";            CreateMap();
            break;
        }
        case 4:{
            this-> pattern ="111111111111111111n100100000000001001n101101111111101101n100000001100000001n101100100001001101n100000100001000001n111100001100001111n110000111111000011n111100001100001111n100001001100100001n101101100001101101n111111111111111111";            CreateMap();
            break;
        }
    }

}