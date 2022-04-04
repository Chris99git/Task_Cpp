#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    long long int i, j=2;
    cin >> i;
    while( j<i)
    {
        j*=2;
    }
    if (i==j)
    {
        cout<<"TAK";
    }
    else
    {
        cout<<"NIE";
    }
    return(0);
}

