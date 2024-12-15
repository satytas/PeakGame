#pragma once

/*typedef struct {
	char* name;
	//speacialAttackes -> array of pointers to functions
}Species;*/

typedef struct {
	int level;
	char species[20];//Species* type;
	char name[20];
	int hp;
	int strength;
	//int toughness;
	//int speed;

}Monster;

extern Monster monsters[6];