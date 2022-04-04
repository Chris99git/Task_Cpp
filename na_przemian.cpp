#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int tab[n];
    for (int i = 0; i < n; i++)
        cin >> tab[i];
    for (int i = 0; i < n; i++)
        if (i % 2 == 0)
            cout << tab[i] << " ";
    cout << endl;

    for (int i = 0; i < n; i++)
        if (i % 2 != 0)
            cout << tab[i] << " ";
    cout << endl;
}
