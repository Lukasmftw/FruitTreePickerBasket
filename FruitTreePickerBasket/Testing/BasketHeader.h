#pragma once

#include "TreeHeader.h"
#include <vector>

#ifndef BASKET_H
#define BASKET_H

class basket
{
private:
	vector<fruit*> fruits;
	const int storage;
public:
	basket();
	void addFruit(fruit &Fruit);
	void emptyBasket();
	int getSize();
	int getStorage();
	
};


#endif // !BASKET_H