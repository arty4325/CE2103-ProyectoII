//
// Created by monicaegm on 4/27/23.
//

#include <iostream>
#include "puntosLista.h"
#include "Puntos.h"

using namespace std;

/**
 * @brief Constructor para la lista de puntos
 */
puntosLista::puntosLista() {
    head= nullptr;
}
/**
 * @brief Insertar puntos en la lista
 * @param puntos Puntos puntero
 */
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
/**
 * @brief Devuelve la cantidad de puntos en la lista
 * @return i cantidad de puntos
 */
int puntosLista::lenLista(){
    int i = 0;
    Puntos* current = head;
    while(current != nullptr){
        i++;
        current = current->next;
    }
    return i;
}
/**
 * @brief Busca un punto con su id
 * @param id int identificador
 * @return punto encontrado
 */
Puntos* puntosLista::findPuntos(int id){
    Puntos *find = head;
    while((find != NULL) and (find->getId()!=id)){
        find = find->next;
    }
    return find;
}
/**
 * @brief mostrar todos los puntos en la lista
 */
void puntosLista::mostrar(){
    Puntos* current = head;
    while(current != nullptr){
        cout<<" current: " <<current->getId()<<endl;
        current = current ->next;
    }
}
/**
 * @brief Elimina todos los puntos de la lista
 */
void puntosLista::eliminarLista() {
    Puntos* current = head;
    while (current != nullptr) {
        Puntos* temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
}