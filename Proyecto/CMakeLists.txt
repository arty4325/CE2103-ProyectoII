
cmake_minimum_required(VERSION 3.5)

project(Pacman)

find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)



find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_executable(Battle_Space main.cpp main.h Level1.cpp Level1.h Cell.cpp puntosLista.cpp puntosLista.h Listas/ListaSimple.cpp Listas/Node.cpp SimpleList.cpp SimpleList.h NodeList.cpp NodeList.h Enemigo1.cpp Enemigo1.h MenuDificultades.cpp MenuDificultades.h PlayerPacman.cpp PlayerPacman.h Puntos.cpp Puntos.h GameFinished.cpp GameFinished.h Enemigo2.cpp Enemigo2.h Enemigo3.cpp Enemigo3.h Enemigo4.cpp Enemigo4.h Puntos.cpp GameOver.cpp GameOver.h Level2.cpp Level2.h Level3.cpp Level3.h Level4.cpp Level4.h Socket.cpp Socket.h SocketThread.cpp SocketThread.h SocketThread2.h SocketThread3.cpp SocketThread3.h SocketThread4.cpp SocketThread4.h SocketThread2.cpp PastillaPoder.cpp PastillaPoder.h)



target_link_libraries(Battle_Space Qt5::Core Qt5::Gui Qt5::Widgets)

target_link_libraries(Battle_Space Qt5::Core Qt5::Gui Qt5::Widgets)

set(CMAKE_AUTOMOC_FLAGS "-fskip-targets=MOC_AUTOMOC_TARGETS_REGEX")

