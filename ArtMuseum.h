#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef _ArtMuseum_h_
#define _ArtMuseum_h_
#include "City.h"
class ArtMuseum :
	public City
{
protected:
	int numberofpictures;
	int age;
public:
	ArtMuseum();
	int GetNumber();
	int GetAge();
	void SetAge(int a);
	void SetNumber(int n);
};
#endif 
