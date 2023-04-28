#include "Cell.h"
#include <QDir>
#include <QPixmap>

/**
 * @brief Constructor to create a node
 */
Cell::Cell(){

}

Cell::Cell(int type){
    this->type = type;

    switch (type) {
        case '0': {
            QString direc = QDir::currentPath();
            QPixmap imagen(direc.mid(0, direc.length() - 18) + "/enemigoRojo/ship.png");
            setPixmap(imagen.scaled(-50, 50));
            break;
        }
        case '1': {
            QString direc = QDir::currentPath();
            QPixmap imagen(direc.mid(0, direc.length() - 18) + "/Images/pixel2.png");
            setPixmap(imagen);//imagen.scaled(-50, 50));
            break;
        }
    }
}
