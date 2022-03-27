#pragma once

#include "BasketHeader.h"

#ifndef PICKER_H
#define PICKER_H

class picker
{
private:
	const int dailyPick;
	basket myBasket;
	int picked;
	float income;
public:
	static int totalPicked;

	picker();
	picker(int n);

	int getPicked();
	double getIncome();

	void empty();

	void collectFruit(tree &Tree);
	void pick(tree &Tree);
};


#endif // !PICKER_H
