#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long int ile;
    long int liczba[100000];
    cin >> ile;
    for (int i = 0; i < ile; i++)
    {
        cin >> liczba[i];
    }
    for (int j = 0; j < ile; j++)
    {
        bool wynik = true;
        if (liczba[j] < 2)
        {
            wynik = false;
        }
        for (int k = 2; k < liczba[j]; k++)
        {
            if (liczba[j] % k == 0)
            {
                wynik = false; 
                break;
            }
        }
        if (wynik)
        {
            cout << "TAK" << endl;
        }
        else cout << "NIE" << endl;
    }
    return 0;
}