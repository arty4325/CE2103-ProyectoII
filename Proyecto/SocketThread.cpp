//
// Created by oscaraad on 14/05/23.
//

#include <QThread>
#include "SocketThread.h"
#include "Level1.h"

#include "SocketThread.h"

SocketThread::SocketThread(Level1* gameWindow, QObject* parent)
        : QThread(parent), gameWindow(gameWindow) {
}

void SocketThread::run() {
    gameWindow->SocketServer();
}
