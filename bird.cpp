//
// bird.cpp
// OAF - 3. beadando - 7. feladat
//
// Soos Balint
// HDX9MU
//

#include <iostream>
#include <string>
#include "bird.h"

using namespace std;

Bird::Bird(std::string & n, int & h)
{
    name = n;
    happiness = h;
}

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