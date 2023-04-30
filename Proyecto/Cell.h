#ifndef NODE_H
#define NODE_H

#include <vector>
#include <QGraphicsPixmapItem>

using namespace std;

class Cell: public QGraphicsPixmapItem{
public:
    Cell(char type,QGraphicsItem *parent = nullptr);

private:
    char type;
};


#endif // NODE_H
