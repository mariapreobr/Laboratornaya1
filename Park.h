#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef _Park_h_
#define _Park_h_
#include "City.h"
class Park :
	public City
{
protected:
	int square;
	int age;
public:
	Park();
	int GetSquare();
	int GetAge();
	void SetAge(int a);
	void SetSquare(int s);
};
#endif
