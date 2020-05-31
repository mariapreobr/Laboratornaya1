#pragma once
#include <iostream>
#include <string>
using namespace std; 

#ifndef _Museum_h_
#define _Museum_h_
#include "City.h"
class Museum :
	public City
{
protected:
	int numberofexhibits;
	int age;
	string type;
public:
	Museum();
	int GetNumber();
	int GetAge();
	string GetType();
	void SetAge(int a);
	void SetNumber(int n);
	void SetType(string t);
};
#endif 
