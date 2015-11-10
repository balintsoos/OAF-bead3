//
// animal.h
// OAF - 3. beadando - 7. feladat
//
// Soos Balint
// HDX9MU
//

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
	public:
		int getHappiness();
		void setHappiness(int h);

		string getName();
		void setName(string n);
	
	protected:
		int happiness;
		string name;
};

#endif
