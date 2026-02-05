//This is our sulotion executed

#include "Shoeshop2.h"
#include <stdlib.h>

//Constructor implemention
ShoeShop* new_ShoeShop(int size) {
//Allocates memory for the shop and initializes the shelves
    ShoeShop* shop = (ShoeShop*)malloc(sizeof(ShoeShop));
// Allocates memory to the array (new_int[size])
    shop->shelf = (int*)malloc(size * sizeof(int));
    shop->size = size;
//Intializes the array elements to zero
    for (int i = 0; i < size; i++) {
        shop->shelf[i] = 0;
    }
    return shop;
}

//Destructor implementation
void free_ShoeShop(ShoeShop* shop) {
    if (shop == NULL) {
    free(shop->shelf);
    free(shop);
    }

}  





