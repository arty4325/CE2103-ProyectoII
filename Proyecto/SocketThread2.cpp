//
// Created by oscaraad on 14/05/23.
//

#include <QThread>
#include "SocketThread2.h"
#include "Level2.h"

SocketThread2::SocketThread2(Level2 *gameWindow, QObject *parent)
: QThread(parent), gameWindow(gameWindow) {
}

void SocketThread2::run() {
    gameWindow -> SocketServer();
}