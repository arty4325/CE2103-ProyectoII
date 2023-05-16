//
// Created by oscaraad on 14/05/23.
//

#ifndef PACMAN_SOCKETTHREAD3_H
#define PACMAN_SOCKETTHREAD3_H
#include <QThread>
#include "Level3.h"


class SocketThread3 : public QThread {
Q_OBJECT
public:
    explicit SocketThread3(Level3* gameWindow, QObject* parent = nullptr);

protected:
    void run() override;

private:
    Level3 *gameWindow;
};


#endif //PACMAN_SOCKETTHREAD3_H
