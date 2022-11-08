
#include <iostream>
#include "Car.h"

int main()
{
	char name[] = "Toyota";
	Car* car1 = new Car(name, 6942069);
	strcpy_s(car1->color, "Black");
	car1->rides = 1;
	car1->KM = 18;
	car1->Distance(78);
	car1->Distance(43);
	car1->Distance(34);
	car1->Distance(35);
	car1->Distance(13);
	car1->CarStatus();


	strcpy_s(name, "Ferrari");
	Car* car2 = new Car(name, 1234567);
	strcpy_s(car2->color, "Pink");
	car2->rides = 3;
	car2->KM = 42;
	car2->Distance(48);
	car2->Distance(23);
	car2->Distance(61);
	car2->Distance(75);
	car2->Distance(22);


	strcpy_s(name, "Nissan");
	Car* car3 = new Car(name, 9512353);
	strcpy_s(car3->color, "Yellow");
	car3->rides = 9;
	car3->KM = 94;
	car3->Distance(15);
	car3->Distance(27);
	car3->Distance(14);
	car3->Distance(61);
	car3->Distance(12);


	strcpy_s(name, "Mazda");
	Car* car4 = new Car(name, 6433182);
	strcpy_s(car4->color, "Brown");
	car4->rides = 4;
	car4->KM = 27;
	car4->Distance(12);
	car4->Distance(7);
	car4->Distance(23);
	car4->Distance(63);
	car4->Distance(56);


	strcpy_s(name, "Ford");
	Car* car5 = new Car(name, 3312235);
	strcpy_s(car5->color, "Blue");
	car5->rides = 5;
	car5->KM = 62;
	car5->Distance(15);
	car5->Distance(23);
	car5->Distance(15);
	car5->Distance(13);
	car5->Distance(90);

	
}