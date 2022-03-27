#pragma once

#include <time.h>
#include <stdlib.h>

#ifndef FRUIT_H
#define FRUIT_H

using namespace std;

class fruit
{
private:
	int weight;
	int size;
public:
	static float price;
	fruit();
	void setWeight(int weight);
	int getWeight();
	void setSize(int size);
	int getSize();
};

#endif // !FRUIT_H

