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

//Function that adds items to the shop
void ShoeShop_add_items(ShoeShop* shop, int row, int num){
    //Adds num items to the specified row in the shop (shop is a pointer to ShoeShop)
    shop->shelf[row] += num;
}

//Function that checks if the item is in stock
int ShoeShop_in_stock(ShoeShop* shop, int row){
    return shop->shelf[row] > 0;
}

//Function that counts the total items in the shop
int ShoeShop_count_items(ShoeShop* shop){
    int tot = 0;
    for(int k = 0; k < shop->size; k++){
        tot += shop->shelf[k];
    }
    return tot;
}

bool ShoeShop_clear(ShoeShop* shop, int row){
    bool rem = shop->shelf[row] > 0;
    shop->shelf[row] = 0;
    return rem;
}





