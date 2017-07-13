#pragma once
#include <iostream>
#include <string>

using namespace std;

 class Car
 {
   public:
	   Car();

	   string getHornSound();
	   string getCurrentColour();

	   void changeColour(string newcolour);
	   void shiftUpGear();

       int getCurrentGear();
	   int getMaxGear();
	   int getMinGear();
	   void shiftDownGear();

   private:
	   int currentGear;

	   const int Maxgear = 5;
	   const int Mingear = 1;
	   
	   string currentColour;
	   string hornSound;
 };