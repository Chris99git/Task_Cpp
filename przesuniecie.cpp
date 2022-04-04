#include <iostream>
#define MAX 101

using namespace std;

int main()
{
    int t;
    cin >> t;
    int ile;
    int liczby[MAX];

    while (t--)
    {
        cin >> ile;
        for (int i = 0; i < ile; i++)
        {
            cin >> liczby[i];
        }

        for (int i = 1; i < ile; i++)
        {
            cout << liczby[i] << " ";
        }
        cout << liczby[0] << "\n";
    }
    return 0;
}
