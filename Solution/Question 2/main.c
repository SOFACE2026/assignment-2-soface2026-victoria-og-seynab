#include "ShoeAbs.h"
#include "Shop2.h"
#include <stdio.h>

int main(){
    //Makes a new shop (constructor)
    ShoeShop* myshop = new_ShoeShop(2);

    Shop* shop = (Shop*)myshop; //casting the ShoeShop pointer to a Shop pointer

    //Adds items to the shop
    ShoeShop_add_items(shop, 0, 2);
    ShoeShop_add_items(shop, 1, 3);

    //count total items in the shop
    int tot = shop->count_items(shop);
    if(tot > 0){
    //Clears the shelves if there are items in the shop
    shop->clear(shop, 0);
    shop->clear(shop, 1);
    }

    //Cleans up the virtual destructor
    shop->dtor(shop);

    return 0;
}