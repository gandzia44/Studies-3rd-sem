#pragma once
#include "Osoba.h"
#include <iostream>
using namespace std;
class Pracownik :
    protected Osoba
{
protected:
    string wojewodztwo;
    const int placaMinimalna = 3000;
public:
    Pracownik(string w = "Wojewodztwo")
    {
        wojewodztwo = w;
        cout << "Utworzono klase Pracownik" << endl;
    }
};

