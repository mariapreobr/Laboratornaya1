#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef _NationalPark_h_
#define _NationalPark_h_
#include "Country.h"
class NationalPark :
	public Country
{
protected:
	int square;
	int age;
	string animals;
	string type;
public:
	NationalPark();
	int GetSquare();
	int GetAge();
	string GetType();
	string GetAnimals();
	void SetAge(int a);
	void SetSquare(int s);
	void SetAnimals(string an);
	void SetType(string t);
};
#endif
