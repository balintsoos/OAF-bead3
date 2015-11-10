//
// dog.cpp
// OAF - 3. beadando - 7. feladat
//
// Soos Balint
// HDX9MU
//

#include <iostream>
#include <string>
#include "animal.h"
#include "dog.h"

using namespace std;

void Dog::goodDay()
{
	happiness += 3;
}

void Dog::averageDay()
{
	// do nothing
}

void Dog::badDay()
{
	happiness -= 10;
}