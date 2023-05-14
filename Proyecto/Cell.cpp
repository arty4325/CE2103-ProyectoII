#include "Cell.h"
#include <QDir>
#include <QPixmap>
#include <QLabel>
#include <iostream>

using namespace std;
/**
 *@brief constructor para los objetos de las celdas del mapa
 * @param type char tipo de celda
 * @param parent QGraphicsItem puntero
 */
Cell::Cell(char type,QGraphicsItem *parent)
        : QGraphicsPixmapItem(parent){
    this->type = type;

    switch (type) {
        case 0: {
            QString direc = QDir::currentPath();
            QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/pixel2.png");
            setPixmap(imagen.scaled(50, 50));
            break;
        }
        case 1: {
            QString direc = QDir::currentPath();
            QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/pixel1.png");
            setPixmap(imagen.scaled(50, 50));
            break;
        }
    }
}
