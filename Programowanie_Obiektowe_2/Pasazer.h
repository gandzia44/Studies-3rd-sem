#include <iostream> 
#include <string> 
#include <algorithm>
#include <functional>
using namespace std;
class Pasazer {
private:
    string imie;
    string nazwisko;
    int rok;
    static int licznik;
public:
    Pasazer(string i = "Imie", string n = "Nazwisko", int r = 1900) // Konstruktor parametryzuj¹cy i domyœlny
    {
        imie = i;
        nazwisko = n;
        rok = r;
        licznik++;
        if (imie == "Imie") {
            cout << "Konstruktor domysl." << "ilosc obiektow: " << licznik << endl;
        }
        else
            cout << "Konstruktor param." << "ilosc obiektow: " << licznik << endl;
    }
    Pasazer(const Pasazer& data, string n) // Konstruktor kopiujacy z arg
    {
        imie = data.imie;
        nazwisko = n;
        rok = data.rok;
        licznik++;
        cout << "Konstruktor kopiuj. z argum." << "ilosc obiektow: " << licznik << endl;
    }
    Pasazer(const Pasazer& data) // Konstruktor kopiujacy
    {
        imie = data.imie;
        nazwisko = data.nazwisko;
        rok = data.rok;
        licznik++;
        cout << "Konstruktor kopiuj." << "ilosc obiektow: " << licznik << endl;
    }
    ~Pasazer() // Destruktor
    {
        licznik--;
        cout << "ilosc obiektow: " << licznik << endl;
    }
    void  wypisz();
    static void getLicznik()
    {
        cout << "Liczba obiektow: " << licznik << endl;
    }
    void setImie(string a);
    void setNazwisko(string a);
    void setRok(int a);
    string getImie();
    string getNazwisko();
    int getRok();
    friend ostream& operator<<(ostream& p, const Pasazer& pas);
    friend bool operator> (const Pasazer& a, const Pasazer& b)
    {
        return a.rok < b.rok;
    }
};