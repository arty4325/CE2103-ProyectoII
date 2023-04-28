//
// Created by monicaegm on 4/27/23.
//

#include "RowsList.h"
#include "Cell.h"
using namespace std;

/**
 * @brief constructor of the list of cells
 */
 /*
RowsList::RowsList() {
    head= nullptr;
}

void RowsList::insertCell(Cell *cell) {
    if (getHead() == NULL)
    {
        setHead(cell);
    }
    else
    {
        getLast()->editPointer(cell);
    }
}

Cell* RowsList::findCell(int id){
    Cell *find =  getHead();
    while((find != NULL) and (find->getId()!=id)){
        find = find->getNext();
    }
    return find;
}

void RowsList::setHead(Cell *H) {
    head = H;
}

Cell* RowsList::getHead() {
    return head;
}

Cell* RowsList::getLast() {
    Cell *last = getHead();
    while(last->getNext()!=NULL){
        last = last->getNext();
    }
    return last;
}

void RowsList::deleteCell(int id){
    Cell *find = getHead();
    Cell *before=NULL;
    if(find->getId()==id){
        setHead(getHead()->getNext());
    } else {
        while((find!=NULL) and (find->getId()!=id)){
            before=find;
            find=find->getNext();
        }
        if (find!=NULL){
            before->editPointer(find->getNext());
        }
    }
    delete find;
}

void RowsList::printList(Cell *n){

    if (n != NULL)
    {
        cout << "We have: " << n->getId() <<endl;
        this->printList(n->next);
    }
}

int RowsList::lenCellList(Cell *n){
    int i = 0;
    while(n->getNext()!=NULL){
        n = n->getNext();
        i++;
    }
    return i;
}
*/