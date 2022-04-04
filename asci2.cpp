#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    for (int i=32; i<=127; i++)
    {
        cout << i << " - " << (char)i << \t\t\t;
    }
    if(i%3==1)
    {
        cout << endl;
    }
    return 0;
}
