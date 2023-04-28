//
// Created by monicaegm on 4/27/23.
//

#ifndef BATTLE_SPACE_GAMEWINDOW_H
#define BATTLE_SPACE_GAMEWINDOW_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <vector>

class GameWindow: public QGraphicsView{
Q_OBJECT
public:
    GameWindow(QWidget * parent = 0);
private:
    QGraphicsScene* scene_;
    int cellSize_;

};


#endif //BATTLE_SPACE_GAMEWINDOW_H
