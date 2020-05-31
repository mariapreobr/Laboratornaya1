#include "NationalPark.h"
#include <iostream>
#include <stdlib.h>
#include <string>

NationalPark::NationalPark() : Country()
{
	square = 0;
	age = 0;
	animals = "0";
	type = "0";
}
int NationalPark::GetSquare()
{
	return square;
}
int NationalPark::GetAge()
{
	return age;
}
string NationalPark::GetAnimals()
{
	return animals;
}
string NationalPark::GetType()
{
	return type;
}

void NationalPark::SetType(string t)
{
	type = t;
}

void NationalPark::SetAnimals(string an)
{
	animals = an;
}

void NationalPark::SetAge(int a)
{
	if (a > 0)
	age = a;
}

void NationalPark::SetSquare(int s)
{
	square = s;
}