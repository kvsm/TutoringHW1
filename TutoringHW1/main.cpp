#include <iostream>
#include <string>
#include "Car.h"

using namespace std;


void PrintCurrentGear(Car car);
void PrintCarColour(Car car);

int main()
{
	// create a car
	Car MyCar;

	// sound the horn
	cout << "You press the car's horn. " << MyCar.getHornSound() << endl;

	// test the gears
	cout << "Testing the gears...\n";
	PrintCurrentGear(MyCar);
	while (MyCar.getCurrentGear() < MyCar.getMaxGear())
	{
		MyCar.shiftUpGear();
	}
	PrintCurrentGear(MyCar);
	while (MyCar.getCurrentGear() > MyCar.getMinGear())
	{
		MyCar.shiftDownGear();
	}
	PrintCurrentGear(MyCar);

	// look at the car's colour
	cout << "Checking the colour...\n";
	PrintCarColour(MyCar);

	// respray the car red
	cout << "Respraying...\n";
	MyCar.changeColour("red");
	PrintCarColour(MyCar);
	
}                                                           

void PrintCurrentGear(Car car)
{
	cout << "The car is in gear: " << car.getCurrentGear() << endl;
}

void PrintCarColour(Car car)
{
	cout << "The car is " << car.getCurrentColour() << ".\n";
}