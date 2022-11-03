cmake_minimum_required(VERSION 3.20)
project(lab4_mcia)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab4_mcia main.cpp Piece.cpp Piece.h Board.cpp Board.h QuatroGame.cpp QuatroGame.h Player.cpp Player.h UnusedPieces.cpp UnusedPieces.h)
