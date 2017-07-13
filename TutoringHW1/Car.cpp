#include <iostream>
#include <string>

#include "Car.h"

using namespace std;

Car::Car()
{
	currentGear = 1;
	currentColour = "green";
	hornSound = "HONK!";
}

string Car::getHornSound()
{
	return hornSound;
}

string Car::getCurrentColour()
{
	return currentColour;
}

void Car::changeColour(string newcolour)
{
	currentColour = newcolour;
}

void Car::shiftUpGear()
{
	if(currentGear < Maxgear)
	{
		currentGear = currentGear + 1;
	}
}

int Car::getCurrentGear()
{
	return currentGear;
}

int Car::getMaxGear()
{
	return Maxgear;
}

int Car::getMinGear()
{
	return Mingear;
}

void Car::shiftDownGear()
{
	if(currentGear > Mingear)
	{
		currentGear = currentGear - 1;
	}
}


