//
// Created by oscaraad on 08/05/23.
//

#ifndef PACMAN_NODELIST_H
#define PACMAN_NODELIST_H

template <class T>
class NodeList {
public:
    NodeList(T value);

    T value;
    NodeList<T>* next;
    int* checkPointer();
    void checkNode();
    void modifyNode(T value);
};


#endif //PACMAN_NODELIST_H
