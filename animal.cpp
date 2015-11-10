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

void Animal::setHappiness(int h)
{
	happiness = h;
}

string Animal::getName()
{
	return name;
}

void Animal::setName(string n)
{
	name = n;
}
