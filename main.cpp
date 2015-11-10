//
// main.cpp
// OAF - 3. beadando - 7. feladat
//
// Soos Balint
// HDX9MU
//

#include <iostream>
#include <fstream>
#include <string>
#include "animal.h"

using namespace std;

struct AnimalStruct
{
	string name;
	char type;
	int happiness;
};

int main ()
{
	// Input Handler
	ifstream input("input.txt");
	
	int numberOfAnimals;
	input >> numberOfAnimals;

	AnimalStruct * animalArray = new AnimalStruct[numberOfAnimals];

	for (int i = 0; i < numberOfAnimals; ++i)
	{
		input >> animalArray[i].type;
		input >> animalArray[i].name;
		input >> animalArray[i].happiness;
	}

	string days;
	input >> days;

	input.close();

	// Create Animal objects
	Animal * collection = new Animal[numberOfAnimals];
	for (int i = 0; i < numberOfAnimals; ++i)
	{
		if (animalArray[i].type == 'H')
		{

		}
		else if (animalArray[i].type == 'M')
		{

		}
		else if (animalArray[i].type == 'K')
		{

		}
	}
	
	return 0;
}
