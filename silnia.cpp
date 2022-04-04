#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int s;
    long long silnia = 1;

    cin >> s;

    for (int i = 1; i<=s; i++)
        silnia *= i;

    cout << silnia << endl;
    return(0);
}
