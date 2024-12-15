#pragma once
#include "monsters.h"
#include "player.h"
#include "sio.h"

extern char pInput[2];
extern int tolerance;

void chapter1();

void intro();

void pEncounter();

int cntD(int n);
char* toString(int n);
void pStats();

void mStats(Monster m);

void DEATH();