#pragma once
class Car
{
public:
	
	int KM;
	int seats;
	int rides;
	int licensePlate;
	char color[15];
	char carName[15];

	void Distance(int addedKM);
	void CarStatus();
	Car(char carName[15], int licensePlate);
	
};

