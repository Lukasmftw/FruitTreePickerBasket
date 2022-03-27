#include "TreeHeader.h"

tree::tree()
	:dailyFruits(10)
{
}


int tree::getSize() { return fruits.size(); }


void tree::newDay()
{
	for (int i = 0; i < dailyFruits; i++)
	{
		growFruit();
	}
}

void tree::growFruit()
{
	fruits.push_back(new fruit);
}



fruit& tree::removeFruit()
{
	if (fruits.size() == 0)
	{
		throw runtime_error("There are no fruits on the tree!");
	}
	int which = rand() % fruits.size();
	fruit &buffer = *fruits[which];
	fruits.erase(fruits.begin() + which);
	return buffer;
}

void tree::showFruits()
{
	if (fruits.size() == 0)
	{
		throw runtime_error("There are no fruits on the tree!");
	}
	for (int i = 0; i < fruits.size(); i++)
	{
		cout << "Fruit " << i+1 << ": " << fruits[i]->getSize() << " cm, " << fruits[i]->getWeight() << " g." << endl;
	}
}

tree::~tree()
{
	cout << "A tree has been cut down" << endl;
}