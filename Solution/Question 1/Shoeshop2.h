// This is our solution for question 1:
// Implement the code of ShopOrg in C using structs instead of classes. 
// This code directly links the functions to the ShopOrg class. 
// No function pointers are required (but could be used, of course).

#ifndef SHOESHOP2_H
#define SHOESHOP2_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
	int* shelf; // Pointer to an array representing the shelves
	int size; // Size of the shop (number of shelves)
} ShoeShop;

// The constructor of the shop
ShoeShop* new_ShoeShop(int size);

//Destructor of the shop that frees memory
void free_ShoeShop(ShoeShop* shop);

//The function that adds items to the shop
void ShoeShop_add_items(ShoeShop* shop, int n, int m);


//The function that clears a shelf in the shop
void ShoeShop_clear(ShoeShop* shop, int row);
//The function that checks if the item is in stock
int ShoeShop_in_stock(ShoeShop* shop, int row);
//The function that count the total items in the shop
int ShoeShop_count_items(ShoeShop* shop);
//The function that add items to the shop
void ShoeShop_add_items(ShoeShop* shop, int row, int num);

#endif