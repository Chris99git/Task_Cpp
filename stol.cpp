#include <iostream>
using namespace std;
int a, b, k;
int bok1, bok2;

int main()
{
    cin >> a >> b >> k;
    if (k > a || k > b)
        cout << "0";
    else if (a * b == k * k){
        cout << (a * b) / (k * k) << endl;
    }
    else if (2 * k > a || 2 * k > b){
        bok1 = (a / k) * 2;
        bok2 = (b - (2 * k)) / k;
        cout << (bok1 + (bok2 * 2)) / 2 << endl;
    }
    else{
        bok1 = (a / k) * 2;
        bok2 = (b - (2 * k)) / k;
        cout << bok1 + (bok2 * 2) << endl;
    }
return 0;
}
