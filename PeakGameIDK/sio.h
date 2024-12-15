#pragma once
#include <stdarg.h>

typedef enum {red,orange,yellow,limeGreen,green,cyan,blue,purple,pink,black,gray,white,bold,res} Color;
extern const char* F[];
extern const char* B[];
extern const char* deleteL;
extern const char* moveUp;
extern const char* moveDown;
extern const char* moveToTheRight;
extern const char* moveToTheLeft;

void printd(float delay, const char* str, ...);

int cntD(int n);

char* toString(int num);