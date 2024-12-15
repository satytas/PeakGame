#pragma once

/*typedef enum IntArray10;

typdef struct {
	char name[20];
	int rarity;
	
};*/

typedef struct {
	char name[20];
	int level;
	int xp;
	int hp;
	int strength;
	//int toughness;
	int speed;
} Player;

extern Player user;