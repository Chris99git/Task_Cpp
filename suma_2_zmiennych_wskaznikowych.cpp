#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int *p, *q, *suma;
    p = new int;
    q = new int;
    suma = new int;
    cin >> *p >> *q;
    *suma = *p + *q;
    cout  << *suma;
    delete p;
    delete q;
    delete suma;
    int *w = new int;
    *w = 7;
    cout << endl << *suma;
    return 0;
}
