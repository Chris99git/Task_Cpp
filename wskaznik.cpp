#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *p;
    p = &n;
    cout << *p;
    cout << endl << (unsigned long long int) p;
    cout << endl << (unsigned long long int) &n;
    cout << endl << (unsigned long long int) &p;
}
