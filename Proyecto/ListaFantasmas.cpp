//
// Created by monicaegm on 4/27/23.
//

#include <iostream>
#include "ListaFantasmas.h"
#include "Entidad.h"
using namespace std;


ListaFantasmas::ListaFantasmas() {
    head= nullptr;
}

void ListaFantasmas::insertarFantasma(Entidad *fantasma) {
    if (getHead() == NULL)
    {
        setHead(fantasma);
    }
    else
    {
        getLast()->editPointer(fantasma);
    }
}
void ListaFantasmas::setHead(Entidad *H) {
    head = H;
}
Entidad* ListaFantasmas::getHead() {
    return head;
}
Entidad* ListaFantasmas::getLast() {
    Entidad *last = getHead();
    while(last->getNext()!=NULL){
        last = last->getNext();
    }
    return last;
}

int ListaFantasmas::lenLista(Entidad *n){
    int i = 0;
    while(n->getNext()!=NULL){
        n = n->getNext();
        i++;
    }
    return i;
}

Entidad* ListaFantasmas::findFantasma(int id){
    Entidad *find =  getHead();
    while((find != NULL) and (find->getId()!=id)){
        find = find->getNext();
    }
    return find;
}