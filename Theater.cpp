#include "Theater.h"
#include <iostream>
#include <stdlib.h>
#include <string>

Theater::Theater() : City()
{
	age = 0;
	type = "0";
}
int Theater::GetAge()
{
	return age;
}
string Theater::GetType()
{
	return type;
}
void Theater::SetAge(int a)
{
	if (a > 0)
	age = a;
}
void Theater::SetType(string t)
{
	type = t;
}