#include "BasketHeader.h"

basket::basket()
	:storage(5)
{

}

int basket::getSize() { return fruits.size(); }
int basket::getStorage() { return storage; }

void basket::addFruit(fruit &Fruit)
{
	fruits.push_back(&Fruit);
}

void basket::emptyBasket()
{
	fruits.clear();
}