
#ifndef SHOESHOP_H
#define SHOESHOP_H


class ShoeShop {
private:
	int* shelf;
	int size;
public:
	ShoeShop(int); // constructor
	~ShoeShop(); // destructor
	void add_items(int, int); // the function adds shoes to the shop
	int in_stock(int); // checks if the shoes is in stock
	int count_items(); // it counts amount of items
	bool clear(int); // removes specific items or clears shelfs
};

#endif



