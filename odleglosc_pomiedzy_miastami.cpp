#include <iostream>
using namespace std;
int main()
{
    int kolumna,wiersz;
    string tablica [5] = {"Warszawa", "Gdansk", "Krakow", "Nowy Sacz", "Wroclaw"};

    int odleglosc[5][5]=
    {
        {0, 343, 294, 346, 348},
        {343, 0, 573, 659, 442},
        {294, 573, 0, 99, 258},
        {346, 659, 99, 0, 357},
        {348, 442, 258, 357, 0}
    };
    string miasto1,miasto2;
    cin >> miasto1>>miasto2;

    for (int i=0; i<5 ; i++)
    {
        if(tablica[i]==miasto1)
        {
            wiersz=i;
        }
    }
    for (int i=0; i<5 ; i++)
    {
        if(tablica[i]==miasto2)
        {
            kolumna=i;
        }
    }
    cout << odleglosc[wiersz][kolumna];
    return 0;
}
