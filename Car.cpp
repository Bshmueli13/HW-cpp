#include <iostream>
#include "Car.h"
#pragma warning(disable:4996)

void Car::Distance(int addedKM)
{
	KM+=addedKM;
	rides++;
}

void Car::CarStatus()
{
	printf("Car Name: %s, LicensePlate: %d, Number of drives: %d, Average KM per drive: %d\n", carName, licensePlate, rides, KM / rides);
}

Car::Car(char* name, int licensePlate)
{
	strcpy_s(carName, name);
	this->licensePlate = licensePlate;
}
