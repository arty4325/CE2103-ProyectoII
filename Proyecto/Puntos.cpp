//
// Created by monicaegm on 5/10/23.
//

#include <QGraphicsItem>
#include <QDir>
#include "Puntos.h"
/**
 * @brief Constructor para mostrar los puntos
 * @param parent QGraphicsItem puntero
 */
Puntos::Puntos(QGraphicsItem *parent)
        : QGraphicsPixmapItem(parent) {
    QString direc = QDir::currentPath();
    QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/puntos.png");
    setPixmap(imagen.scaled(50, 50));
    next = nullptr;
    eliminado = false;
}
/**
 * @brief coloca un identificador a cada punto
 * @param ide int identificador
 */
int Puntos::setId(int ide){
    this->id = ide;
}
/**
 * @brief devuelve el identificador del punto
 * @return id identificador
 */
int Puntos::getId(){
    return id;
}