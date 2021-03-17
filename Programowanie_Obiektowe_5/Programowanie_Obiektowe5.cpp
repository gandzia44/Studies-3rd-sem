// Programowanie_Obiektowe5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <string> 
#include <algorithm>
#include <functional>

using namespace std;

struct film {
    string  tytul;
    string aktorzy[2];
    int rok;
    int czasTrwania;

    void wypisz();
};
void film::wypisz() {
    cout << tytul << " " << aktorzy[0] << " " << aktorzy[1] << " " << rok << " " << czasTrwania << " " << endl;
};

class Klient {
    const int limit = 5;
    string imie;
    string nazwisko;
    film* wypozyczoneFilmy[3];
};



int main()
{
    film f = { "Droga8", "Kowlaski8", "Biericki8", 1998, 188 };

    string film::* wsk;
    wsk = &film::tytul;
    cout << f.*wsk << endl;


    film tab[3] = {
    { "Droga0", "Kowlaski0", "Biericki0", 1990, 180 },
    { "Droga1", "Kowlaski1", "Biericki1", 1991, 181 },
    { "Droga2", "Kowlaski2", "Biericki2", 1992, 182 }
    };
    
    tab[0].wypisz();
    tab[1].wypisz();
    tab[2].wypisz();

}
