// Graph.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const int columns = 10;
    int a;
    int values[columns];
    int max = 0;
    for (int i = 0; i < columns; i++) {
        cin >> a;
        if (a >= 0) {
            values[i] = a;
        }
        else {
            cout << "Input an positive integer" << endl;
            i = i - 1;
        }
        if (a > max) {
            max = a;
        }
    }

    for (int r = 0; r < max; ++r) {
        if ((max - r) < 10) {
            cout << "   " << max - r << "  ";
        }
        else if ((max - r) < 100) {
            cout << "  " << max - r << "  ";
        }
        else if ((max - r) < 1000) {
            cout << " " << max - r << "  ";
        }
        else{
            cout << max - r << "  ";
        }
        for (int c = 0; c < columns; ++c)
            cout << (r + values[c] >= max ? '*' : ' ');
        cout << endl;
    }
    cout << "---- +";
    for (int i = 0; i < columns; i++) {
        cout << "-";
    }
    cout << endl;
}