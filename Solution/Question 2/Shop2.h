// Our solution for question 2: 
// converting the file "Shop.h" to C

#ifndef SHOP2_H
#define SHOP2_H

#include <stdbool.h>

// The functions works like a interface in C:
// Starting off by defining a struct:

typedef struct Shop {

    // Destructor for the shop - free memory
    void (*dtor)(Shop* self);

    // Binding the pointer self to the ShoeShop - this function adds new items to the shop:
    void (*add_items)(struct Shop* self, int row, int num);

    // Helps with checking if a specific item is in stock
    int (*in_stock)(struct Shop* self, int row);

    // Counts the amount of items in total
    int (*count_items)(struct Shop* self);

    // This function clears a specific item from the stock
    bool (*clear)(struct Shop* self, int row);
} Shop;

#endif