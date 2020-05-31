#include "Museum.h"
#include <iostream>
#include <stdlib.h>
#include <string>

Museum::Museum() : City()
{
	numberofexhibits = 0;
	age = 0;
	type = "0";
}
int Museum::GetNumber()
{
	return numberofexhibits;
}
int Museum::GetAge()
{
	return age;
}
string Museum::GetType()
{
	return type;
}
void Museum::SetAge(int a)
{
	if (a > 0)
	age = a;
}
void Museum::SetNumber(int n)
{
	numberofexhibits = n;
}
void Museum::SetType(string t)
{
	type = t;
}