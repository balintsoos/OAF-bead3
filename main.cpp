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
#include "dog.h"
#include "fish.h"
#include "bird.h"

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

	AnimalStruct * animalArray = new AnimalStruct [numberOfAnimals];

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
			//collection[i] = new Fish(animalArray[i].name, animalArray[i].happiness);
		}
		else if (animalArray[i].type == 'M')
		{
			collection[i] = new Bird(animalArray[i].name, animalArray[i].happiness);
		}
		else if (animalArray[i].type == 'K')
		{
			//collection[i] = new Dog(animalArray[i].name, animalArray[i].happiness);
		}
	}
	
	return 0;
}
