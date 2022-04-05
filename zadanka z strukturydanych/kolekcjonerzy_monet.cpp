#include <iostream>
using namespace std;
int main()
{
    int x;
    int poszukiwana;
    int odnaleziona;
    int arrayx[1000];
    int arrayy[1000];
    odnaleziona = 0;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> arrayx[i];
    }
    for (int j = 0; j < x; j++)
    {
        cin >> arrayy[j];
    }
    for (int i = 0; i < x; i++)
    {
        poszukiwana = arrayx[i];
        for (int j = 0; j < x; j++)
        {
            if (arrayy[j] == poszukiwana)
            {
                odnaleziona++;
                break;
            }
        }
    }
    if (odnaleziona == x)
        cout << "TAK";
    else
        cout << "NIE";
    return 0;
}
