//
// Created by oscaraad on 14/05/23.
//

#include "SocketThread4.h"

#include <QThread>
#include "SocketThread4.h"
#include "Level4.h"

SocketThread4::SocketThread4(Level4 *gameWindow, QObject *parent)
: QThread(parent), gameWindow(gameWindow)
{}

void SocketThread4::run() {
    gameWindow -> SocketServer();
}