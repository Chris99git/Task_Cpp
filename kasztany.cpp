#include <iostream>
using namespace std;

int main()
{
    int zestawy;
    cin >> zestawy;

    int wynik[zestawy];

    for (int i = 0; i < zestawy; i++)
    {
        wynik[i] = 0;

        int dni;
        cin >> dni;

        int kasztany[dni];

        for (int j = 0; j < dni; j++)
        {
            cin >> kasztany[j];
            wynik[i] += kasztany[j];
        }
    }

    for (int i = 0; i < zestawy; i++)
    {
        cout << wynik[i] << endl;
    }

    return 0;
}
