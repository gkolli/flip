cmake_minimum_required(VERSION 3.13)
project(Flip)

set(CMAKE_CXX_STANDARD 14)

add_executable(Flip main.cpp Card.cpp Card.h Deck.cpp Deck.h Exceptions.h Node.h)