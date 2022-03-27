#include "PickerHeader.h"
int picker::totalPicked = 0;

picker::picker()
	:dailyPick(5), income(0), picked(0)
{
}

picker::picker(int n)
	: dailyPick(n), income(0), picked(0)
{
}

int picker::getPicked() { return dailyPick; }
double picker::getIncome() { return income;    }

void picker::collectFruit(tree &Tree)
{
	fruit removedFruit = Tree.removeFruit();
	if (myBasket.getSize() == myBasket.getStorage())
	{
		empty();
	}
	myBasket.addFruit(removedFruit);
	income += removedFruit.price;
}


void picker::pick(tree& Tree)
{
	for (int i = 0; i < dailyPick; i++)
	{
		collectFruit(Tree);
	}
}

void picker::empty()
{
	picked += myBasket.getSize();
	totalPicked += picked;
	myBasket.emptyBasket();
}