#include <iostream>
#include <stdlib.h>
#include <string>

#include "ArtMuseum.h"
#include "City.h"
#include "Continent.h"
#include "Country.h"
#include "Kremlin.h"
#include "Museum.h"
#include "NationalPark.h"
#include "Park.h"
#include "Picture.h"
#include "Statue.h"
#include "Theater.h"

using namespace std;

int main()
{
	Continent eurasia;
	Country france;
	france.SetCont("eurasia");
	City paris;
	paris.SetCou("france");
	ArtMuseum louvre;
	//louvre.GetCou;
	louvre.SetNumber(300000);
	louvre.SetAge(226);
	louvre.SetCity("paris");
	cout << "louvre city is in " << louvre.GetCity() <<  "\n" << endl;
	cout << "louvre was established in  " << (2019 - louvre.GetAge()) << " year\n" << endl;

	Country russia;
	russia.SetCont("eurasia");
	City moscow;
	City kazan;
	City nizhnynovgorod;
	moscow.SetCou("russia");
	kazan.SetCou("russia");
	nizhnynovgorod.SetCou("russia");
	nizhnynovgorod.SetPeople(1200000);
	moscow.SetPeople(12000000);
	kazan.SetPeople(1100000);
	long int summa1;
	summa1 = (moscow.GetPeople() + kazan.GetPeople() + nizhnynovgorod.GetPeople());
	cout << "there are " << summa1 << " in Moscow, Kazan and Nizhny Novgorod\n" << endl;
	cout << "there are " << (moscow.GetPeople() / nizhnynovgorod.GetPeople()) << " times more people in Moscow then in NN\n" << endl;

	Picture monalisa;
	monalisa.SetArtist("leonardo da vinci");
	monalisa.SetGenre("portrait");
	monalisa.SetMuseum("louvre");
	cout << "Mona Lisa is a " << monalisa.GetGenre() << " portrayed by " <<
		monalisa.GetArtist() << ".\n" << "it is situated in " << monalisa.GetMuseum() << " in " << louvre.GetCity() << 
		" in " << paris.GetCou() << " in " << france.GetCont() << "\n" << endl;

	Kremlin moscowkremlin;
	Kremlin nnkremlin;
	Kremlin kazankremlin;
	moscowkremlin.SetCity("moscow");
	nnkremlin.SetCity("nizhnynovgorod");
	kazankremlin.SetCity("kazan");
	moscowkremlin.SetColor("red");
	nnkremlin.SetColor("red");
	kazankremlin.SetColor("white");
	cout << "there are two " << moscowkremlin.GetColor() << " kremlins in " << nizhnynovgorod.GetCou() <<
		" and one " << kazankremlin.GetColor() << "\n" << endl;

}

