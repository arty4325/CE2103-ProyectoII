#ifndef NODE_H
#define NODE_H

#include <vector>
#include <QGraphicsPixmapItem>

class Cell: public QGraphicsPixmapItem{
public:
    Cell();
    Cell(int type);

private:
    int type;
};


#endif // NODE_H
