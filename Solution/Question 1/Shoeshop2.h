//This is our solution for question 1:

#ifndef SHOESHOP2_H
#define SHOESHOP2_H

#include <stdio.h>

struct Shoeshop {
	int* shelf;
	int size;
};

void Shoeshop(int) __attribute__((constructor));

#endif