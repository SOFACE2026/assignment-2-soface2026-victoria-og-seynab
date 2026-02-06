// Our solution to the file "ShoeShop.cpp"

#include <stdlib.h>
#include "Shop2.h"
#include "ShoeAbs.h"
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
void ShoeShop_add_items(Shop* ptr, int row, int num){

    ShoeShop* self = (ShoeShop*)ptr; //casting the Shop pointer to a ShoeShop pointer
    self->shelf[row] += num;
}

int ShoeShop_in_stock(Shop* ptr, int row){
    ShoeShop* self = (ShoeShop*)ptr; //
    return self->shelf[row] > 0;
}

int ShoeShop_count_items(Shop* ptr){
    ShoeShop* self = (ShoeShop*)ptr;
    int tot = 0;

    for(int k = 0; k < self->size; k++){
        tot += self->shelf[k];
    }
    return tot;
}

bool ShoeShop_clear(Shop* ptr, int row){
    ShoeShop* self = (ShoeShop*)ptr;
    bool rem = self->shelf[row] > 0;
    self->shelf[row] = 0;
    return rem;
}

//  Destructor for the shoe shop
void ShoeShop_dtor(Shop* ptr){
    ShoeShop* self = (ShoeShop*)ptr;
    if(self->shelf != NULL){
        free(self->shelf);
    }
    free(self);
}

// Step 2: Contructor for the shoe shop
ShoeShop* new_ShoeShop(int size){
    ShoeShop* s = (ShoeShop*)malloc(sizeof(ShoeShop));


    // Initialising the data
    s->size = size;
    s->shelf = (int*)malloc(size*sizeof(int));
    
    //Initialising the shelfs to 0
    for(int i = 0; i < size; i++){
        s->shelf[i]=0;
    }

     // Initialising the function pointers in the Shop struct
        s->base.dtor = ShoeShop_dtor;
        s->base.add_items = ShoeShop_add_items;
        s->base.in_stock = ShoeShop_in_stock;
        s->base.count_items = ShoeShop_count_items;
        s->base.clear = ShoeShop_clear;

    return s;
}