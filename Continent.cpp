#include "Continent.h"
#include <iostream>
#include <stdlib.h>
#include <string>


Continent::Continent()
{
	continent = "0";
}

string Continent::GetCont()
{
	return continent;
}

void Continent::SetCont(string c)
{
	//std::cout << "Write Eurasia, North America, South America, Africa or  Australia";
	continent = c;
}