// Programowanie_Obiektowe_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Osoba.h"
#include <string>
#include "Informatyk.h"
#include "Pracownik.h"

using namespace std;
int Osoba::licznik = 0;
int main()
{
	Osoba jeden("Szymon", "Gamza", 2021);
	jeden.wiek();
	Informatyk *dwa;
	dwa = new Informatyk();
	dwa->info();
	Informatyk trzy(*dwa, "SzymonI", "GamzaI", 1945);
	trzy.info();
	trzy.wiek();
	Osoba *tab[3];
	//*tab[1] = jeden;
	//*tab[2] = *dwa;
	//tab[3] = trzy;
	//for (int i = 0; i < 3; i++)
	//{
		//Osoba[i]->info();
	//}

}
