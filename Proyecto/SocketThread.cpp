//
// Created by oscaraad on 14/05/23.
//

#include <QThread>
#include "SocketThread.h"
#include "GameWindow.h"

#include "SocketThread.h"

SocketThread::SocketThread(GameWindow* gameWindow, QObject* parent)
        : QThread(parent), gameWindow(gameWindow) {
}

void SocketThread::run() {
    gameWindow->SocketServer();
}
