#pragma once
#include "Pracownik.h"
#include <iostream>
#include "Osoba.h"
using namespace std;
class Informatyk :
    protected Pracownik
{
private:
    string specjalizacja;
    double mnoznik;
    double pensja = mnoznik * (double)placaMinimalna;
public:
    Informatyk(string i = "ImieI", string n = "NazwiskoI", int r = 1901, string w = "WojewodztwoI", string s = "Specjalizacja", double m = 1.0)
    {
        specjalizacja = s;
        mnoznik = m;
        imie = i;
        nazwisko = n;
        rokUrodzenia = r;
        wojewodztwo = w;
        cout << "Utworzono klase Informatyk" << endl;
    }
    Informatyk(const Informatyk& data, string i, string n, int r)
    {
        specjalizacja = data.specjalizacja;
        imie = i;
        nazwisko = n;
        rokUrodzenia = r;
        mnoznik = data.mnoznik;
        wojewodztwo = data.wojewodztwo;
        cout << "Utworzono klase Informatyk" << endl;
    }
    void info()
    {
        cout << imie << nazwisko << rokUrodzenia << wojewodztwo << specjalizacja << mnoznik << endl;
    }
    void wiek();
};

