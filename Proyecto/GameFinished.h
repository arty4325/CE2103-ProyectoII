//
// Created by monicaegm on 5/10/23.
//

#ifndef PACMAN_GAMEFINISHED_H
#define PACMAN_GAMEFINISHED_H
#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>

class GameFinished : public QGraphicsView{
public:
    QLabel *label;
    QLabel *labelp;

    GameFinished(QWidget * parent = 0);

    void setPuntaje(int puntaje);
};


#endif //PACMAN_GAMEFINISHED_H
