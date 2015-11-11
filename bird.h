//
// bird.h
// OAF - 3. beadando - 7. feladat
//
// Soos Balint
// HDX9MU
//

#ifndef BIRD_H
#define BIRD_H

#include "animal.h"

class Bird: public Animal
{
	public:
		Bird(std::string & n, int & h);

		void goodDay();
		void averageDay();
		void badDay();
};

#endif
