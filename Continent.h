#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef _Continent_h_
#define _Continent_h_

class Continent
{
protected:
	string continent;
public:
	Continent();
	string GetCont();
	void SetCont(string c);
};

#endif
