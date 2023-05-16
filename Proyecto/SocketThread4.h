//
// Created by oscaraad on 14/05/23.
//

#ifndef PACMAN_SOCKETTHREAD4_H
#define PACMAN_SOCKETTHREAD4_H

#include <QThread>
#include "Level4.h"



class SocketThread4 : public QThread{
    Q_OBJECT
public:
    explicit SocketThread4(Level4* gameWindow, QObject *parent = nullptr);

protected:
    void run() override;

private:
    Level4* gameWindow;
};


#endif //PACMAN_SOCKETTHREAD4_H
