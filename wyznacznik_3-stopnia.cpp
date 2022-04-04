#include <iostream>
using namespace std;
int main()
{
    int det;
    int a11, a12, a13;
    int a21, a22, a23;
    int a31, a32, a33;

    cin >> a11 >> a12 >> a13 >> a21 >> a22 >> a23 >> a31 >> a32 >> a33;

    det=a11*a22*a33 + a12*a23*a31 + a13*a21*a32 - a13*a22*a31 - a12*a21*a33 - a11*a23*a32;
    cout << "Wyznacznik wynosi " << det << endl;
    return 0;
}
