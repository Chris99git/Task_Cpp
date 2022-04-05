#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int x;
    cin >> x;
    int p, n, wynik;
    for (int i = 0; i < x; i++)
    {
        cin >> p >> n;
        wynik = 0;
        while (n)
        {
            wynik= wynik + n % p;
            n /= p;
        }
        cout << wynik << endl;
    }
    return 0;
}
