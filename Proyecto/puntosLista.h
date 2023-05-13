//
// Created by monicaegm on 4/27/23.
//

#ifndef BATTLE_SPACE_LISTAFANTASMAS_H
#define BATTLE_SPACE_LISTAFANTASMAS_H
#include "Puntos.h"

class puntosLista {
public:
    puntosLista();
    void insertarPuntos(Puntos *puntos);
    int lenLista();
    Puntos *findPuntos(int id);
    void mostrar();

    Puntos* head;
};


#endif //BATTLE_SPACE_LISTAFANTASMAS_H
