#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    for (int i=32; i<=127; i++)
    {
        cout << i << " - " << (char)i << endl;
    }
    return 0;
}
