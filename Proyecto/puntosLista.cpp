//
// Created by monicaegm on 4/27/23.
//

#include <iostream>
#include "puntosLista.h"
#include "Puntos.h"

using namespace std;


puntosLista::puntosLista() {
    head= nullptr;
}

void puntosLista::insertarPuntos(Puntos *puntos) {
    puntos->next = nullptr;

    if (head == nullptr)
    {
        head = puntos;
    }
    else
    {
        Puntos* current = head;
        while (current->next != nullptr){
            current = current -> next;
        }
        current -> next = puntos;
    }
}

int puntosLista::lenLista(){
    int i = 0;
    Puntos* current = head;
    while(current != nullptr){
        i++;
        current = current->next;
    }
    return i;
}

Puntos* puntosLista::findPuntos(int id){
    Puntos *find = head;
    while((find != NULL) and (find->getId()!=id)){
        find = find->next;
    }
    return find;
}

void puntosLista::mostrar(){
    Puntos* current = head;
    while(current != nullptr){
        cout<<" current: " <<current->getId()<<endl;
        current = current ->next;
    }
}
