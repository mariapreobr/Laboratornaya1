#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef _City_h_
#define _City_h_
#include "Country.h"
class City :
	public Country
{
protected:
	string city;
	int people;
public:
	City();
	string GetCity();
	int GetPeople();
	void SetCity(string c);
	void SetPeople(int p);
};
#endif 

