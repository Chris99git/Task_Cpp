#include <iostream>
using namespace std;
int w, k, a,j,n,i;
int main()
{
    cin >>w>>k;
    cout << endl;

    int mA[w][k], mB[w][k],mC[w][k];
    for (i = 0; i < w; i++)                          // wpisywanie liczb do macierzy A
    {
        for (j = 0; j < k; j++)
        {
            cin >> a;
            mA[i][j] = a;
        }
    }

    for (i = 0; i < w; i++)                          // wpisywanie liczb do macierzy B
    {
        for (j = 0; j < k; j++)
        {
            cin >> a;
            mB[i][j] = a;
        }
    }

    for (i=0; i<w; i++)                              //mnozenie macierzy A*B
    {
        for(j=0; j<k; j++)
        {
            mC[i][j]=0;
            for(n=0; n<k; n++)
            {
                mC[i][j]=(mA[i][n]*mB[n][j])+mC[i][j];
            }
        }
    }
    for (i=0; i<w; i++)                              //wyswietlanie macierzy C
    {
        cout << "|";
        for(j=0; j<k; j++)
        {
            cout << " " << mC[i][j];
        }
        cout << "|" << endl;
    }
    return 0;
}
