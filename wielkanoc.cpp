#include <iostream>
using namespace std;
int main()
{
    int M,N,rok,dzien,miesiac,a,b,c,d,e,wielkanoc;

    cin >> rok;

    if ( rok>=1800 && rok<=1899)
    {
        M=23;
        N=4;
    }
    else if ( rok>=1900 && rok<=2099)
    {
        M=24;
        N=5;
    }
    else if ( rok>=2100 && rok<=2199)
    {
        M=24;
        N=6;
    }
    else if (rok==2200)
    {
        M=25;
        N=0;
    }
    a = rok % 19;
    b = rok % 4;
    c = rok % 7;
    d = (19*a + M) % 30;
    e = (2*b + 4*c + 6*d + N) % 7;

    wielkanoc = 22 + d + e;

    if(d == 29 && e == 6)
    {
        cout << 19 << " " << 4;
    }
    else if (d == 28 && e == 6 &&  a > 10)
    {
        cout << 18 <<" "<<4;
    }
    else
    {
        if (wielkanoc<=31)
        {
            cout << wielkanoc << " " <<3;
        }
        else
        {
            cout << wielkanoc-31 << " " <<4;
        }
    }

}
