#include "ShoeShop2.h"
#include <stdio.h>

int main(){
    //Makes a new shop (constructor)
    ShoeShop* shop = new_ShoeShop(2);
    //Adds items to the shop
    ShoeShop_add_items(shop, 0, 2);
    ShoeShop_add_items(shop, 1, 3);

    //count total items in the shop
    int tot = ShoeShop_count_items(shop);
    if(tot > 0){
    //Clears the shelves if there are items in the shop
    ShoeShop_clear(shop, 0);
    ShoeShop_clear(shop, 1);
    }

    //Husk at rydde op (Destructor)
    free_ShoeShop(shop);

    return 0;
}
