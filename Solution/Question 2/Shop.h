// Our solution for question 2: 
// converting the file "Shop.h" to C

#ifndef SHOP_H
#define SHOP_H

#include <stdbool.h>

// The functions works like a interface in C:
// Starting off by defining a struct:

typedef struct Shop {
    void (*add_items)(struct Shop* self, int item, int amount);
    int (*in_stock)(struct Shop* self, int item);
    int (*count_items)(struct Shop* self);
    bool (*clear)(struct Shop* self, int item);
} Shop;

#endif