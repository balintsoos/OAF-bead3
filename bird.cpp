//
// bird.cpp
// OAF - 3. beadando - 7. feladat
//
// Soos Balint
// HDX9MU
//

#include <iostream>
#include <string>
#include "animal.h"
#include "bird.h"

using namespace std;

void Bird::goodDay()
{
	happiness += 2;
}

void Bird::averageDay()
{
	happiness -= 1;
}

void Bird::badDay()
{
	happiness -= 3;
}