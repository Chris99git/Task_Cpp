#include <iostream>
using namespace std;
int main()
{
    string dziekuje_prosze, gleboki_plytki;
    int ilosc_lini, id, licznik_plytkie = 0, licznik_glebokie = 0, licznik_notesu = 0;
    int glebokie[1000], plytkie[1000], notes[1000];

    cin >> ilosc_lini;

    //kosmetyka w warunku petli <ilosc_lini a <=ilosc_lini+1 to to samo;
    for (int i = 1; i <= ilosc_lini; i++)
    {
        cin >> dziekuje_prosze;
        //wczytanie danych w zależności od wariantu prosze/dziekuje;
        if (dziekuje_prosze == "dziekuje")
        {
            cin >> gleboki_plytki;
            cin >> id;
        }
        else
        {
            cin >> gleboki_plytki;
        }
        if (dziekuje_prosze == "dziekuje")
        {
            if (gleboki_plytki == "plytki")
            {
                plytkie[licznik_plytkie] = id;
                licznik_plytkie++;
            }
            else if (gleboki_plytki == "gleboki")
            {
                glebokie[licznik_glebokie] = id;
                licznik_glebokie++;
            }
        }
        //tutaj zmiany nie uzywam id bo go nie czytam ale nr id pozyskuje z "stosu talerzy" gdzie zostal wczesniej odlozony

        if (dziekuje_prosze == "prosze")
        {
            if (gleboki_plytki == "plytki")
            {
                licznik_plytkie--;
                notes[licznik_notesu] = plytkie[licznik_plytkie];
                licznik_notesu++;
            }
            else if (gleboki_plytki == "gleboki")
            {
                licznik_glebokie--;
                notes[licznik_notesu] = glebokie[licznik_glebokie];
                licznik_notesu++;
            }
        }
    }
    //zmniejszenie o jeden warunku w petli bo czytal o jedna "kartke" za daleko;
    for (int i = 0; i < licznik_notesu; i++)
    {
        cout << notes[i] << endl;
    }
    return 0;
}

