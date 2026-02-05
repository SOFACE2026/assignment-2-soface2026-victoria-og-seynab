// Our solution for question 2: 
// converting the file "Shop.h" to C

#ifndef SHOP_H
#define SHOP_H

#include <stdbool.h>

// The functions works like a interface in C:
// Starting off by defining a struct:

typedef struct Shop {

    // Binding the pointer self to the ShoeShop - this function adds new items to the shop:
    void (*add_items)(struct Shop* self, int item, int amount);

    // Helps with checking if a specific item is in stock
    int (*in_stock)(struct Shop* self, int item);

    // Counts the amount of items in total
    int (*count_items)(struct Shop* self);

    // This function clears a specific item from the stock
    bool (*clear)(struct Shop* self, int item);
} Shop;

#endif