//
// Created by oscaraad on 14/05/23.
//

#ifndef PACMAN_SOCKETTHREAD2_H
#define PACMAN_SOCKETTHREAD2_H

#include <QThread>
#include "Level2.h"

class SocketThread2 : public QThread{
    Q_OBJECT
public:
    explicit SocketThread2(Level2 *gameWindow, QObject* parent = nullptr);

protected:
    void run() override;

private:
    Level2* gameWindow;


};


#endif //PACMAN_SOCKETTHREAD2_H
