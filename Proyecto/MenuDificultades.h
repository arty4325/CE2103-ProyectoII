//
// Created by oscaraad on 09/05/23.
//

#ifndef PACMAN_MENUDIFICULTADES_H
#define PACMAN_MENUDIFICULTADES_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>

class MenuDificultades: public QGraphicsView {
public:
    MenuDificultades(QWidget * parent = 0);

    void easy();
    void medium();
    void difficult();


    QGraphicsScene * scene;
};


#endif //PACMAN_MENUDIFICULTADES_H
