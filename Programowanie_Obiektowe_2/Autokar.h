#include <iostream> 
#include <string> 
#include <algorithm>
#include <functional>
using namespace std;
class Autokar
{
private:
    string nazwa_autokaru;
    string cel_podrozy;
    int cena_biletu;
    int limit_miejsc;
    //Pasazer lista_pasazerow[]; //TODO Lista pasazerow
public:
    Autokar(string n = "Autobus", string c = "Nibylandia", int b = 2, int l = 40) // Konstruktor parametryzuj¹cy i domyœlny
    {
        nazwa_autokaru= n;
        cel_podrozy = c;
        cena_biletu = b;
        limit_miejsc = 40;
    }
    void wypisz();
    void operator++() {
        cena_biletu++;
    };
};

