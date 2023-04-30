//
// Created by monicaegm on 4/27/23.
//

#ifndef BATTLE_SPACE_GAMEWINDOW_H
#define BATTLE_SPACE_GAMEWINDOW_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <string>
#include <iostream>

class GameWindow: public QGraphicsView{
public:
    GameWindow(QWidget * parent = 0);
private:
    QGraphicsScene* scene_;
    int cellSize_;
    QString pattern;

    void CreateMap();
    void CreateLevels(int lvl);
};


#endif //BATTLE_SPACE_GAMEWINDOW_H
