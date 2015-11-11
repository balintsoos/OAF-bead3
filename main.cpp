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

void dayHandler(char day, Animal* collection, int length);
void printHandler(Animal* collection, int length);

int main ()
{
	// ===================================================
	// Input Handler
	// ===================================================
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

	// ===================================================
	// Create Animal objects
	// ===================================================
	Animal * collection = new Animal[numberOfAnimals];
	for (int i = 0; i < numberOfAnimals; ++i)
	{
		if (animalArray[i].type == 'H')
		{
			collection[i] = *(new Fish(animalArray[i].name, animalArray[i].happiness));
		}
		else if (animalArray[i].type == 'M')
		{
			collection[i] = *(new Bird(animalArray[i].name, animalArray[i].happiness));
		}
		else if (animalArray[i].type == 'K')
		{
			collection[i] = *(new Dog(animalArray[i].name, animalArray[i].happiness));
		}
	}

	// ===================================================
	// Iterate through days
	// ===================================================
	for (string::size_type i = 0; i < days.size(); ++i) {
		cout << "\nAfter Day " << i+1 << " - ";
		dayHandler(days[i], collection, numberOfAnimals);
		printHandler(collection, numberOfAnimals);
	}
	
	return 0;
}

void dayHandler(char day, Animal* collection, int length)
{
	if (day == 'j') {cout << "GOOD";};
	if (day == 'a') {cout << "AVERAGE";};
	if (day == 'r') {cout << "BAD";};
	cout << "\n----------------------" << endl;

	for (int i = 0; i < length; ++i)
	{
		if (day == 'j')
		{
			collection[i].goodDay();
		}
		else if (day == 'a')
		{
			collection[i].averageDay();
		}
		else if (day == 'r')
		{
			collection[i].badDay();
		}
	}
}

void printHandler(Animal* collection, int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << collection[i].getName() << " - " << collection[i].getHappiness() << endl;
	}
}
