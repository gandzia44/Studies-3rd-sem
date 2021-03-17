// Programowanie_Obiektowe_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <string> 
#include <algorithm>
#include <functional>
#include "Pasazer.h"
#include "Autokar.h"
using namespace std;
int main()
{
    Pasazer domysl("Szymon", "Gamza", 1997);
    domysl.wypisz();
    Pasazer param;
    cout << param.getImie() << endl;
    cout << param.getNazwisko() << endl;
    cout << param.getRok() << endl;
    Pasazer kop(param);
    kop.wypisz();
    Pasazer kopd(param, "Daniec");
    kopd.wypisz();
    Pasazer* ptab = new Pasazer[4];
    ptab[0] = { "Ala", "Kot", 1995 };
    ptab[1] = { "Tomasz", "Nedza", 1996 };
    ptab[2] = { "Aneta", "Biernat", 1994 };
    ptab[3] = { "Dziki", "Kot", 1853 };
    ptab[0].wypisz();
    ptab[1].wypisz();
    ptab[2].wypisz();
    ptab[3].wypisz();
    stable_sort(ptab, ptab + 4, greater<Pasazer>());
    cout << ptab[0] << endl;
    cout << ptab[1] << endl;
    cout << ptab[2] << endl;
    cout << ptab[3] << endl;
    delete[] ptab;
    Pasazer::getLicznik();
    Autokar szybki("STAR", "Zoliborz", 2);
    szybki.wypisz();
    //szybki++;
    //szybki.wypisz();

}
