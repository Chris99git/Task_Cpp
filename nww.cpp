#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generuj(int *tab, int n, int a, int b)
{
    srand(time(0));
    for (int i =0; i < n; i++)
    {
        tab[i] = rand()%(a-b+1)+a;
    }
}

void wypisz(int *tab, int n)
{
    for (int i=0; i<n; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
}

int main()
{
    int *tab,n;
    cin >> n;
    tab = new int[n];
    generuj(tab,n,1,49);
    wypisz(tab,n);
    delete []tab;
}
