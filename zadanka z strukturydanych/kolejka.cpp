#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char kolejka[1000001];
    int testy;
    cin >> testy;
    char znak;
    int ostatniaPozycja = 0;
    while (testy--)
    {
        while ((znak = getchar()) < 'A') {};//zwraca kod odczytanego znaku
        ostatniaPozycja = -1;
        do
        {
            while (ostatniaPozycja >= 0 && znak > kolejka[ostatniaPozycja])
            {
                ostatniaPozycja--;
            }

            kolejka[++ostatniaPozycja] = znak;


        } while ((znak = getchar()) >= 'A');

        kolejka[ostatniaPozycja + 1] = 0;
        printf("%s", kolejka);//wypisuje %s format lancuchow;
        cout << endl;




    }
}
