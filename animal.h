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
		//Animal(){};

		int getHappiness();
		void setHappiness(int h);

		std::string getName();
		void setName(std::string n);
		void goodDay(){};
		void averageDay(){};
		void badDay(){};
	
	protected:
		int happiness;
		std::string name;
};

#endif
