#include "ArtMuseum.h"
#include <iostream>
#include <stdlib.h>
#include <string>

ArtMuseum::ArtMuseum() : City()
{
	numberofpictures = 0;
    age = 0;
}
int ArtMuseum::GetNumber()
{
	return numberofpictures;
}
int ArtMuseum::GetAge()
{
	return age;
}

void ArtMuseum::SetAge(int a)
{
	if (a > 0)
	age = a;
}

void ArtMuseum::SetNumber(int n)
{
	numberofpictures = n;
}