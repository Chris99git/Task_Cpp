#include <iostream>
using namespace std;

int main()
{
    int dzieci, h_poszukiwane,ilosc_wiez,wysokosc;
    cin >> dzieci;
    for (int m = 0; m < dzieci; m++)
    {
        cin >> h_poszukiwane >> ilosc_wiez;
        int wynik = 0;
        for (int i = 0; i < ilosc_wiez; i++)
        {
            cin >> wysokosc;
            if (wysokosc == h_poszukiwane)
            {
                wynik++;
            }
        }
        cout << wynik << endl;
    }
    return 0;
}
