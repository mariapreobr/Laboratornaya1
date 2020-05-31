#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef _Kremlin_h_
#define _Kremlin_h_
#include "City.h"
class Kremlin :
	public City
{
protected:
	string color;
	int age;
public:
	Kremlin();
	string	GetColor();
	int GetAge();
	void SetAge(int a);
	void SetColor(string c);
};
#endif 
