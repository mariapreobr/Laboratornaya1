#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef _Picture_h_
#define _Picture_h_
#include "ArtMuseum.h"
class Picture :
	public ArtMuseum
{
protected:
	string artist;
	string genre;
	string museum;
	int age;
public:
	Picture();
	string GetArtist();
	string GetMuseum();
	int GetAge();
	string GetGenre();
	void SetAge(int a);
	void SetArtist(string ar);
	void SetGenre(string g);
	void SetMuseum(string m);
};
#endif
