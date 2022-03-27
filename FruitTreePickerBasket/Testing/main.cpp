#include "PickerHeader.h"

#include <iostream>

int main()
{
	srand(time(NULL));
	try
	{
		tree* appleTree = new tree;
		tree* bananaTree = new tree;
		tree* orangeTree = new tree;
		picker* bob = new picker(5);
		picker* rick = new picker(4);
		picker* carl = new picker(6);
		for (int dayspassed = 0; dayspassed < 4; ++dayspassed)
		{
			appleTree->newDay();
			bananaTree->newDay();
			orangeTree->newDay();
			bob->pick(*appleTree);
			rick->pick(*bananaTree);
			carl->pick(*orangeTree);
			bob->empty();
			rick->empty();
			carl->empty();
			cout << "The apple tree has " << appleTree->getSize() << " apples on it." << endl;
			cout << "The banana tree has " << bananaTree->getSize() << " bananes on it." << endl;
			cout << "The orange tree has " << orangeTree->getSize() << " oranges on it." << endl;
			cout << "Bob has collected " << bob->getPicked() << " apples, and now has " << bob->getIncome() << " Euros." << endl;
			cout << "Rick has collected " << rick->getPicked() << " bananas, and now has " << rick->getIncome() << " Euros." << endl;
			cout << "Carl has collected " << carl->getPicked() << " oranges, and now has " << carl->getIncome() << " Euros." << endl;
			cout << "They have a total of " << bob->totalPicked << " picked fruits." << endl << endl;
		}

	}
	catch (runtime_error a)
	{
		cout << "An unexpected error has occured: " << a.what();
	}
}

