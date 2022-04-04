#include <iostream>
using namespace std;
int main()
{
    int det;
    int a11, a12;
    int a21, a22;

    cin >> a11 >> a12 >> a21 >> a22;

    det=a11*a22-a12*a21;
    if(det!=0)
    {
        cout << a22 << -a12 <<endl;
        cout << -a21 << a11<<endl;
    }
    else
    {
        cout << "macierz nie jest odwrotna"<<endl;
    }
    return 0;
}
