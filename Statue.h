#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef _Statue_h_
#define _Statue_h_
#include "City.h"
class Statue :
	public City
{
protected:
	int hight;
	int age;
public:
	Statue();
	int GetHight();
	int GetAge();
	void SetAge(int a);
	void SetHight(int h);
};
#endif
