#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    char znak;
    cin >> znak;
    if ((int)znak>=48 && (int)znak<=57)
    {
        cout << "cyfra";
    }
    else if (znak>=65 && znak<=90)
    {
        cout << "mala litera";
    }
    else if (znak>='a' && znak<='z')
    {
        cout << "mala litera";
    }
    else
    {
        cout << "znak specjalny";
    }
}
