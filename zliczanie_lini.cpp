#include <iostream>
using namespace std;

int main()
{
    int l = 0;
    char znak;

    while (cin.get(znak))
    {
        if (znak == '\n')
            l++;
    }
    cout << l + 1;
    return 0;
}
