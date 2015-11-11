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
		void setHappiness(int value);

		std::string getName();
		void setName(std::string n);
		
		virtual void goodDay(){};
		virtual void averageDay(){};
		virtual void badDay(){};
	
	protected:
		int happiness;
		std::string name;
};

#endif
