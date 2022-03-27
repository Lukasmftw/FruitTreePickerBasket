#include "FruitHeader.h"

void fruit::setWeight(int weight) { this->weight = weight; }
void fruit::setSize(int size) { this->size = size; }
int fruit::getWeight() { return weight; }
int fruit::getSize() { return size; }
int randWeight() { int buffer = rand() % 100 + 50; return buffer; }
int randSize() { int buffer = rand() % 5 + 5; return buffer; }

float fruit::price = 3.5;


fruit::fruit()
{
	setWeight(randWeight());
	setSize(randSize());
}