#pragma once
#include <iostream>
using namespace std;
class Ulamek
{
private:
	int licznik = 1;
	int mianownik = 1;
public:
	Ulamek(int l, int m)
	{
		if (m == 0) {
			cout << "Nie dziel przez zero!" << endl;

		}
		else
		{
			licznik = l;
			mianownik = m;
		}
	}
	void setLicznik(int n);
	void setMianownik(int n);
	int getLicznik();
	int getMianownik();
	void wyswietl();
	Ulamek(int calkowita) : licznik(calkowita), mianownik(1)
	{
	}
	operator double()
	{
		double a = double(licznik) / double(mianownik);
		return a;
	}
};
Ulamek podziel(Ulamek pierwszy, Ulamek drugi);
double pierwiastkuj(double a);

