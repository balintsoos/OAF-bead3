//
// dog.h
// OAF - 3. beadando - 7. feladat
//
// Soos Balint
// HDX9MU
//

#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog: public Animal
{
	public:
		Dog(std::string & n, int & h);

		void goodDay();
		void averageDay();
		void badDay();
};

#endif
