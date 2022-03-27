#pragma once

#include "FruitHeader.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <stdexcept>

using namespace std;

#ifndef TREE_H
#define TREE_H

class tree
{
private:
	vector<fruit*> fruits;
	const int dailyFruits;
public:
	tree();

	int getSize();
	void growFruit();
	void newDay();
	fruit& removeFruit();
	void showFruits();
	~tree();
};
#endif // !TREE_H

