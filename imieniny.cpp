#include <iostream>
using namespace std;
int main()
{
    int cukierki, uczniowie, ile_prob;
    bool wynik;
    cin >> ile_prob;

    for (int i = 0; i < ile_prob; i++)
    {
        cin >> uczniowie >> cukierki;
        wynik = true;



        if (uczniowie > 1 && cukierki % (uczniowie - 1) == 0)
            wynik = false;

        if (wynik)
            cout << "TAK";
        else
            cout << "NIE";

        cout << endl;
    }
    return 0;
}
