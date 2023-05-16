//
// Created by oscaraad on 08/05/23.
//

#include <QGraphicsItem>
#include <QDir>

#include "Enemigo1.h"
/**
 * @brief Constructor para el enemigo 1 que se va a mostrar
 * @param parent QGraphicsItem puntero
 */
Enemigo1::Enemigo1(QGraphicsItem *parent)
    : QGraphicsPixmapItem(parent) {
    QString direc = QDir::currentPath();
    QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/Fantasma1.png");
    setPixmap(imagen.scaled(50, 50));
}



/**
 * @brief cambiaa el fantasma a huyendo
 * @param null
 */
void Enemigo1::Asustado(){
    QString direc = QDir::currentPath();
    QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/fantasma asustado.png");
    setPixmap(imagen.scaled(50, 50));
}

/**
 * @brief canbia el fantasma a normal
 * @param null
 */
void Enemigo1::backToNormal(){
    QString direc = QDir::currentPath();
    QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/Fantasma1.png");
    setPixmap(imagen.scaled(50, 50));
}


