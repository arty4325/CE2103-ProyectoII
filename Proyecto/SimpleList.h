//
// Created by oscaraad on 08/05/23.
//

#ifndef PACMAN_SIMPLELIST_H
#define PACMAN_SIMPLELIST_H

#include "NodeList.h"

template <class T>
class SimpleList {
private:
    NodeList<T>* head;
public:
    SimpleList();
    NodeList<T>* getHead();
    void insertHead(T value);
    void deleteHead();
    void printList() const;
    T getPosVal(int position) const;

    void setHead(NodeList<T> *newHead);

    int getSize() const;

    void deletePos(int position);

    void modPos(int position, T newValue);

    void insertEnd(T value);
};


#endif //PACMAN_SIMPLELIST_H
