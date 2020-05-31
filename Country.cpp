#include "Country.h"
#include <iostream>
#include <stdlib.h>
#include <string>

Country::Country() : Continent()
{
	counrty = "0";
}

string Country::GetCou()
{
	return counrty;
}

void Country::SetCou(string c)
{
	counrty = c;
}