#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int n;
    cin >> n;
    int tab[n];
    for (int i=0; i<n; i++)
    {
        tab[i] = rand()%101;
    }
    for (int i=0; i<n; i++)
    {
        cout << tab[i] << " ";
    }
    return 0;
}
