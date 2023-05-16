//
// Created by oscaraad on 14/05/23.
//

#include "SocketThread3.h"
#include <QThread>
#include "Level3.h"

SocketThread3::SocketThread3(Level3* gameWindow, QObject *parent)
: QThread(parent), gameWindow(gameWindow)
{}

void SocketThread3::run() {
    gameWindow -> SocketServer();
}