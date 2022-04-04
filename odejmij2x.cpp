#include <iostream>
using namespace std;
int main()
{
    int det;
    int a11, a12, a13, a14;
    int a21, a22, a23, a24;
    int a31, a32, a33, a34;
    int a41, a42, a43, a44;

    cin >> a11 >> a12 >> a13 >> a14 >> a21 >> a22 >> a23 >> a24 >> a31 >> a32 >> a33>> a34>>a41>>a42>>a43>>a44;
    cout <<a11<<" "<<a12<<" "<<a13<<" "<<a14<<endl;
    cout <<a21-(2*a11)<<" "<<a22-(2*a12)<<" "<<a23-(2*a13)<<" "<<a24-(2*a14)<<endl;
    cout <<a31<<" "<<a32<<" "<<a33<<" "<<a34<<endl;
    cout <<a41<<" "<<a42<<" "<<a43<<" "<<a44<<endl;
    return 0;
}
