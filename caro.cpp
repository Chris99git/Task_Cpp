#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n,m,k;
    cin >> n;
    m=0;
    k=(2*n);
    for (int i=k; i>0; i--)
    {
        for (int a=i; a>0; a--)
            cout << " ";
        for (int b=k-i; b>0; b--)
            cout << "* ";
        cout << endl;
    }
    for (int i=0; i<(k+1); i++)
    {
        for (int a=0; a<i; a++)
            cout << " ";
        for (int b=k-i; b>0; b--)
            cout << "* ";
        cout << endl;
    }
}
