#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef _Theater_h_
#define _Theater_h_
#include "City.h"
class Theater :
	public City
{
protected:
	string type;
	int age;
public:
	Theater();
	string GetType();
	int GetAge();
	void SetAge(int a);
	void SetType(string t);
};
#endif
