#pragma once
#include <string>
#include <iostream>
using namespace std;
class Osoba
{
protected:
	static int licznik;
	string imie;
	string nazwisko;
	int rokUrodzenia;
public:
	void wiek();
	Osoba(string i = "Imie", string n = "Nazwisko", int r = 1900)
	{
		imie = i;
		nazwisko = n;
		rokUrodzenia = r;
		licznik++;
		cout << "Utworzono klase Osoba";
	}
};

