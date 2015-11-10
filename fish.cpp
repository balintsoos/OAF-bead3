//
// fish.cpp
// OAF - 3. beadando - 7. feladat
//
// Soos Balint
// HDX9MU
//

#include <iostream>
#include <string>
#include "animal.h"
#include "fish.h"

using namespace std;

void Fish::goodDay()
{
	happiness += 1;
}

void Fish::averageDay()
{
	happiness -= 3;
}

void Fish::badDay()
{
	happiness -= 5;
}