#include "monsters.h"

//char monsters[][16] = { "Little Goblin", "Huge Spider", "Fearsome Dragon" };
//int mHlth[] = { 25, 50, 100 };

Monster monsters[6] = {{.level = 1, .species = "Goblin", .name = "Little Goblin", .hp = 10, .strength = 3},
						{.level = 3, .species = "Spider", .name = "Huge Spider", .hp = 30, .strength = 9},
						{.level = 10, .species = "Dragon", .name = "Fearsome Dragon", .hp = 100, .strength = 50},
						{.level = 3, .species = "Troll", .name = "Big Boy", .hp = 45, .strength = 15},
						{.level = 2, .species = "Human", .name = "Evil Witch", .hp =15 , .strength = 2},
						{.level = 10, .species = "Leviathan", .name = "Giant Leviathan", .hp = 100, .strength = 50}};

//monsters[0] = {.name = "Little Goblin", }