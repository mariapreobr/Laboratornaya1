#include "City.h"
#include <iostream>
#include <stdlib.h>
#include <string>

City::City() : Country()
{
	city = "0";
	people = 0;
}

string City::GetCity()
{
	return city;
}
int City::GetPeople()
{
	return people;
}

void City::SetCity(string c)
{
	city = c;
}
void City::SetPeople(int p)
{
	people = p;
}