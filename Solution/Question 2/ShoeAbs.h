// Implement the code of ShopAbs in C emulating the polymorphism 
// provided by means of the abstract class Shop. 
// In this implementation function pointers are required. 
// They need to be implemented as members of the struct Shop. 
// The implementation of ShoeShop must declare the function
// pointers in exactly the same order. 
// A type cast to ’(Shop*)’ needs to be used to use a ShoeShop via a Shop pointer.


// This is out sulotion for the file "ShoeShop.h"

#ifndef SHOESHOP_H
#define SHOESHOP_H

#include <stdbool.h>

typedef struct {
    int* shelf;
    int size;
} ShoeShop;

void ShoeShop_init(Shoeshop* shop, int size); //Constructor converted from C++ to C
void ShoeShop_destroy(ShoeShop* shop); //destructor converted to C

//The functions add_items, in_stock, count_items and clear converted from C++ to C
void Shoeshop_add_items(ShoeShop* shop, int item, int amount);
int ShoeShop_in_stock(ShoeShop* shop, int item);
int ShoeShop_count_items(ShoeShop* shop);
bool ShoeShop_clear(ShoeShop* shop, int item);

#endif



