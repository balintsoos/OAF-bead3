//
// fish.cpp
// OAF - 3. beadando - 7. feladat
//
// Soos Balint
// HDX9MU
//

#include <iostream>
#include <string>
#include "fish.h"

using namespace std;

Fish::Fish(std::string & n, int & h)
{
    name = n;
    happiness = h;
}

void Fish::goodDay()
{
	setHappiness(1);
}

void Fish::averageDay()
{
	setHappiness(-3);
}

void Fish::badDay()
{
	setHappiness(-5);
}