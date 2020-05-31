#include "Picture.h"
#include <iostream>
#include <stdlib.h>
#include <string>

Picture::Picture() : ArtMuseum()
{
	artist = "0";
	age = 0;
	genre = "0";
	museum = "0";
}
string Picture::GetGenre()
{
	return genre;
}
int Picture::GetAge()
{
	return age;
}
string Picture::GetArtist()
{
	return artist;
}
string Picture::GetMuseum()
{
	return museum;
}
void Picture::SetAge(int a)
{
	if (a > 0)
	age = a;
}
void Picture::SetGenre(string g)
{
	genre = g;
}
void Picture::SetMuseum(string m)
{
	museum = m;
}
void Picture::SetArtist(string ar)
{
	artist = ar;
}