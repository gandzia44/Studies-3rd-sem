#include <iostream> 
#include <string> 
#include <algorithm>
#include <functional>
#include "Pasazer.h"
using namespace std;
void Pasazer::wypisz() //Metoda wypisz
{
    cout << imie << endl << nazwisko << endl << rok << endl;
}
void Pasazer::setImie(string a)
{
    imie = a;
}
void Pasazer::setNazwisko(string a)
{
    nazwisko = a;
}
void Pasazer::setRok(int a)
{
    rok = a;
}
string Pasazer::getImie()
{
    return imie;
}
string Pasazer::getNazwisko()
{
    return nazwisko;
}
int Pasazer::getRok()
{
    return rok;
}
int Pasazer::licznik = 0;
ostream& operator<<(ostream& p, const Pasazer& pas)
{
    p << pas.imie << endl << pas.nazwisko << endl << pas.rok << endl;
    return p;
}