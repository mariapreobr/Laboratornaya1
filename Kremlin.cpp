#include "Kremlin.h"
#include <iostream>
#include <stdlib.h>
#include <string>

Kremlin::Kremlin() : City()
{
	age = 0;
	color = "0";
}
string Kremlin::GetColor()
{
	return color;
}
int Kremlin::GetAge()
{
	return age;
}
void Kremlin::SetAge(int a)
{
	if (a > 0)
	age = a;
}
void Kremlin::SetColor(string c)
{
	color = c;
}