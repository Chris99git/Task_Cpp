#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    int *p;
    p = new int;
    cin >> *p;
    n = *p;
    cout << endl << n;
    cout << endl << *p;
    *p=4;
    cout << endl << n;
    cout << endl << *p;
    delete p;
    return 0;
}
