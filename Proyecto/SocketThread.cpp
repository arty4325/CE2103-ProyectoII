//
// Created by oscaraad on 14/05/23.
//

#include <QThread>
#include "SocketThread.h"
#include "Level1.h"

#include "SocketThread.h"
/**
 * @brief habilita el servidor de manera continua
 * @param gameWindow level1* puntero
 * @param parent QObject* puntero
 */
SocketThread::SocketThread(Level1* gameWindow, QObject* parent)
        : QThread(parent), gameWindow(gameWindow) {
}
/**
 * @brief habilita el servidor en la ventana de level1
 */
void SocketThread::run() {
    gameWindow->SocketServer();
}
