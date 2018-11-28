/* Play.c Andrew Levy */
#ifndef LIFE_H_
#define LIFE_H_

#include <stdio.h>
#include <stdlib.h>

void printArray(int x, int y, char**A);

void newBoard(int x, int y, char**A);

int play(int x, int y, char**board1, char**board2, char**board3, int gens, int print, int pause);

void fillArray(int x, int y, char**board);

#endif
