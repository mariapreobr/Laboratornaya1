#pragma once

#include <iostream>
#include <string>
using namespace std;

#ifndef _Country_h_
#define _Counrty_h_
#include "Continent.h"
class Country :
	public Continent
{
protected:
	string counrty;
public:
	Country();
	string GetCou();
	void SetCou(string c);
};
#endif 


