#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int x, suma = 0;
        cin >> x;
        for (int j = 1; j <= x; j++)
        {
            int liczba;
            cin >> liczba;
            suma += liczba;
        }
        cout << suma << "\n";
    }
    return false;
}
