#ifndef POINTERS_H_INCLUDED
#define POINTERS_H_INCLUDED

#include <stdio.h>
#include "Debug_macros.h"

void pointersFunction();
void printPointersToFunction();
void showResult(int x, int y, int (*sum)(int, int));
int sumTwoNumbers(int a, int b);

#endif // POINTERS_H_INCLUDED
