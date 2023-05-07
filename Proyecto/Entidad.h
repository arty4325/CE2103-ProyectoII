//
// Created by monicaegm on 4/30/23.
//

#ifndef BATTLE_SPACE_ENTIDAD_H
#define BATTLE_SPACE_ENTIDAD_H
#include <vector>
#include <QGraphicsPixmapItem>

using namespace std;

class Entidad: public QGraphicsPixmapItem{
public:
    Entidad();
    Entidad(char type, QGraphicsItem *parent = nullptr);
    Entidad *getNext();
    void editPointer(Entidad *nuevoNext);
    int getId();

private:
    Entidad* next;
    char type;


};


#endif //BATTLE_SPACE_ENTIDAD_H
