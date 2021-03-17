// Programowanie_Obiektowe3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Ulamek.h"
using namespace std;
int main()
{
    Ulamek a = Ulamek(2, 3);
    Ulamek b = Ulamek(3, 4);
    a.wyswietl();
    b.wyswietl();
    Ulamek c = podziel(a, b);
    c.wyswietl();
    Ulamek d = podziel(a, 4);
    d.wyswietl();
    double e = pierwiastkuj(9);
    cout << e << endl;
    double f = a;
    cout << f << endl;
    double g = pierwiastkuj(f);
    cout << g << endl;
}