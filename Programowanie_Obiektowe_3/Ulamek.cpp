#include "Ulamek.h"
#include <iostream>
using namespace std;

void Ulamek::wyswietl()
{
	cout << licznik << "/" << mianownik << endl;
}
void Ulamek::setLicznik(int n)
{
	licznik = n;
}
void Ulamek::setMianownik(int n)
{
	mianownik = n;
}
int Ulamek::getLicznik()
{
	return licznik;
}
int Ulamek::getMianownik()
{
	return mianownik;
}
Ulamek podziel(Ulamek pierwszy, Ulamek drugi)
{
	Ulamek c = Ulamek(1,1);
	c.setLicznik(pierwszy.getLicznik() * drugi.getMianownik());
	c.setMianownik(pierwszy.getMianownik() * drugi.getLicznik());
	return c;
}
double pierwiastkuj(double a)
{
	double b = sqrt(a);
	return b;
}