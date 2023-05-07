//
// Created by monicaegm on 4/27/23.
//

#ifndef BATTLE_SPACE_LISTAFANTASMAS_H
#define BATTLE_SPACE_LISTAFANTASMAS_H


#include "Entidad.h"

class ListaFantasmas {
public:
    ListaFantasmas();
    void insertarFantasma(Entidad *fantasma);
    Entidad *findFantasma(int id);
    Entidad *getHead();
    void setHead(Entidad *H);
    Entidad *getLast();
    void deleteFantasma(int id);
    void printList(Entidad *n);
    int lenLista(Entidad *n);

    Entidad* head;

};


#endif //BATTLE_SPACE_LISTAFANTASMAS_H
