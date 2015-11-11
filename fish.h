//
// fish.h
// OAF - 3. beadando - 7. feladat
//
// Soos Balint
// HDX9MU
//

#ifndef FISH_H
#define FISH_H

#include "animal.h"

class Fish: public Animal
{
	public:
		Fish(std::string & n, int & h);

		void goodDay();
		void averageDay();
		void badDay();
};

#endif
