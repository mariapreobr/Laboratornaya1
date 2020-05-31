#include "Statue.h"
#include <iostream>
#include <stdlib.h>
#include <string>

Statue::Statue() : City()
{
	age = 0;
	hight = 0;
}
int Statue::GetHight()
{
	return hight;
}
int Statue::GetAge()
{
	return age;
}
void Statue::SetAge(int a)
{
	if (a > 0)
	age = a;
}
void Statue::SetHight(int h)
{
	hight = h;
}