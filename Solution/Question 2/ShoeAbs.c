// Our solution to the file "ShoeShop.cpp"

#include <stdlib.h>
#include "Shop.h"
#include <stdbool.h>

// converting the :public Shop to C
typedef struct {
    Shop base;
    int* shelf;
    int size;
} ShoeShop;

// Converting the constructor 
// Instead of new, we are going to use malloc in C
// This function will allocate the memory for both the shop and its shelf
ShoeShop* ShoeShop_create(int size){

    ShoeShop* self = malloc(sizeof(ShoeShop));

    if(self==NULL) return NULL;

    self->shelf=malloc(size*sizeof(int)); // = new int[size] in C++

    if(self->shelf==NULL){
        free(self);
        return NULL;
    }

    self->size = size;

    //Initialising the shelfs to 0
    for(int i = 0; i < size; i++){
        self->shelf[i]=0;
    }

    return self;

}

// Converting the destructor
void ShoeShop_destroy(ShoeShop* self){
    if(self!=NULL){
        free(self->shelf); // = deleting the shelf
        free(self); // = deleting the struct
    }
}

//The functions add_items, in_stock, count_items and clear converted to C
void ShoeShop_add_items(ShoeShop* self, int row, int num){
    self->shelf[row] += num;
}

int ShoeShop_in_stock(ShoeShop* self, int row){
    return self->shelf[row] > 0;
}

int ShoeShop_count_items(ShoeShop* self){
    int tot = 0;

    for(int k = 0; k < self->size; k++){
        tot += self->shelf[k];
    }
    return tot;
}

bool ShoeShop_clear(ShoeShop* self, int row){
    bool rem = self->shelf[row] > 0;
    self->shelf[row] = 0;
    return rem;
}

