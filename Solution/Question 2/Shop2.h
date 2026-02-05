#ifndef SHOP2_H
#define SHOP2_H

#include <stdbool.h>

// Forward declaration of ShoeShop struct
typedef struct Shop Shop;

struct Shop {
    // Function pointers for the Shop operations
    void(*dtor)(Shop*); // Virtual destructor
    void(*add_items)(Shop*, int, int); // Function to add items
    int(*in_stock)(Shop*, int); // Function to check if items are in stock
    int(*count_items)(Shop*); // Function to count total items
    bool(*clear)(Shop*, int); // Function to clear a shelf
}

#endif
