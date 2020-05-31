#include "Park.h"
#include <iostream>
#include <stdlib.h>
#include <string>

Park::Park() : City()
{
	square = 0;
	age = 0;
}
int Park::GetSquare()
{
	return square;
}
int Park::GetAge()
{
	return age;
}

void Park::SetAge(int a)
{
	if (a > 0)
	age = a;
}

void Park::SetSquare(int s)
{
	square = s;
}