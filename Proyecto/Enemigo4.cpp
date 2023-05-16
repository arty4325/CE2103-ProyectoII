//
// Created by oscaraad on 13/05/23.
//

#include <QDir>
#include "Enemigo4.h"
/**
 * @brief Constructor para el enemigo 4 que se va a mostrar
 * @param parent QGraphicsItem puntero
 */
Enemigo4::Enemigo4(QGraphicsItem *parent)
    : QGraphicsPixmapItem(parent){
        QString direc = QDir::currentPath();
        QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/Fantasma4.png");
        setPixmap(imagen.scaled(50, 50));
}

void Enemigo4::Asustado(){
    QString direc = QDir::currentPath();
    QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/fantasma asustado.png");
    setPixmap(imagen.scaled(50, 50));
}

void Enemigo4::backToNormal(){
    QString direc = QDir::currentPath();
    QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/Fantasma4.png");
    setPixmap(imagen.scaled(50, 50));
}
