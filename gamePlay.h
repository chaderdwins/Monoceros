/*******************************************************************************************
** Authors: Chris Spravka, Matthew Feidt, Chad Erdwins
** Date:  13 OCT 2018
** Description: gameplay header file
*******************************************************************************************/
#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include <stdlib.h>
#include <ncurses.h>
#include <string.h>
#include <arpa/inet.h>

#include "interfaces.h"

struct absLoc {
	int x[MAX_SPRITE_DISPS*MAX_DISP_SUBSIZE];
	int y[MAX_SPRITE_DISPS*MAX_DISP_SUBSIZE];
	int numChars;
};

void initGame(struct gameState * state, struct library * lib, struct levelData * level);

void updatePhysics(struct gameState * state);
void limitVel(struct sprite * temp, float limit);
void detectCollision(struct gameState * state, struct library * lib);
void manageCollision(int i, int j,struct gameState * state, struct library * lib);
float calcDistance(struct sprite * s1, struct sprite * s2);
int checkOverlap(struct sprite * s1, struct sprite * s2);
void calcAbsLoc(struct sprite * spriteIn, struct absLoc * loc);
//void playGame(struct gameState * state, struct library * lib, struct levelData * level);
void calcScore(struct gameState * state, struct levelData * level);
void playGame(int network_socket);
//void playGameSingle(int network_socket);
void playGameSingle();
void waitQueue();
void handleInput(int inputChar, struct gameState *state, struct library * lib);
void single_player_instructions();
void restrictPlaySpace(struct gameState *state);
void freeGame(struct gameState * state, struct library * lib, struct levelData * level);
void createDummyWindows(struct gameState * state, int maxX, int maxY, WINDOW*, WINDOW*);
void scrubInput(int vertCtrl, int * inputChar);
void killPlayer(struct gameState * state);

#endif
