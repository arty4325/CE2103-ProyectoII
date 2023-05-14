//
// Created by oscaraad on 14/05/23.
//

#ifndef PACMAN_SOCKETTHREAD_H
#define PACMAN_SOCKETTHREAD_H

#include <QThread>
#include "Level1.h" // Incluye el archivo de encabezado de tu clase GameWindow

class SocketThread : public QThread {
Q_OBJECT

public:
    explicit SocketThread(Level1* gameWindow, QObject* parent = nullptr);

protected:
    void run() override;

private:
    Level1* gameWindow;
};

#endif //PACMAN_SOCKETTHREAD_H
