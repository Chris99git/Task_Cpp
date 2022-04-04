#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    int obz, ciast, testy, czas;
    double n;

    cin >> testy;

    for (int i = 0; i < testy; i++)
    {
        cin >> obz >> ciast;

        n = 0;
        for (int i = 0; i < obz; i++)
        {
            cin >> czas;
            n += 86400 / czas;
        }

        cout << ceil(n / ciast) << endl;
    }
    return 0;
}
