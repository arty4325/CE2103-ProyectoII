//
// Created by oscaraad on 14/05/23.
//

#ifndef PACMAN_SOCKETTHREAD_H
#define PACMAN_SOCKETTHREAD_H

#include <QThread>
#include "GameWindow.h" // Incluye el archivo de encabezado de tu clase GameWindow

class SocketThread : public QThread {
Q_OBJECT

public:
    explicit SocketThread(GameWindow* gameWindow, QObject* parent = nullptr);

protected:
    void run() override;

private:
    GameWindow* gameWindow;
};

#endif //PACMAN_SOCKETTHREAD_H
