//
// animal.cpp
// OAF - 3. beadando - 7. feladat
//
// Soos Balint
// HDX9MU
//

#include <iostream>
#include <string>
#include "animal.h"

using namespace std;

int Animal::getHappiness()
{
	return happiness;
}

void Animal::setHappiness(int value)
{
	if (happiness != 0)
	{
		if (happiness + value >= 100)
		{
			happiness = 100;
		}
		else if (happiness + value <= 0)
		{
			happiness = 0;
		}
		else
		{
			happiness += value;
		}
	}
}

string Animal::getName()
{
	return name;
}

void Animal::setName(string n)
{
	name = n;
}
