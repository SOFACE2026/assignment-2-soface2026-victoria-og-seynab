// Implement the code of ShopAbs in C emulating the polymorphism 
// provided by means of the abstract class Shop. 
// In this implementation function pointers are required. 
// They need to be implemented as members of the struct Shop. 
// The implementation of ShoeShop must declare the function
// pointers in exactly the same order. 
// A type cast to ’(Shop*)’ needs to be used to use a ShoeShop via a Shop pointer.

#ifndef SHOEABS_H
#define SHOEABS_H

#include <stdbool.h>

// Forward declaration of 

// This is out sulotion for the file "ShoeShop.h"

#include "Shop2.h"

typedef struct {
    // The first thing in the struct is the base struct
    // So there is a pointer to ShoeShop that can call the functions in the Shop struct
    Shop base;


    int* shelf;
    int size;
} ShoeShop;

// Contructor
ShoeShop* new_ShoeShop(int size);

#endif




