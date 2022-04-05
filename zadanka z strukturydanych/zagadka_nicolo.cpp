#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>
using namespace std;

long long rownanie(long long x, long long p)
{
    long long wyn;
    wyn = x * x * x + p * x;
    return wyn;
}
long long stopien3(long long p, long long q)
{
    long long xMAX = pow(q, (1 / 3.0));
    if (rownanie(xMAX, p) == q)
        return xMAX;

    long long xMIN = 1;
    bool brak = false;
    while (xMAX > xMIN)
    {
        long long srodek = (xMAX + xMIN + 1) / 2;
        if (rownanie(srodek, p) <= q)
            xMIN = srodek;
        else
            xMAX = srodek - 1;
    }
    if (rownanie(xMAX, p) == q)
        return xMAX;
    else
        return brak;
}
int main()
{
    int z;
    cin >> z;
    long long p[z - 1], q[z - 1];
    for (int i = 0; i < z; ++i)
        cin >> p[i] >> q[i];

    for (int i = 0; i < z; ++i)
    {
        long long wyn = stopien3(p[i], q[i]);
        if (wyn == 0)
            cout << "NIE" << endl;
        else
            cout << wyn << endl;
    }
}