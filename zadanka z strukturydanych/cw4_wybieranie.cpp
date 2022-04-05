#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
void Generuj(int *tab, int n)
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 100;
    }
}
void Wypisz(int *tab, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
}
void Bubble(int *tab, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (tab[j] > tab[j + 1])
                swap(tab[j], tab[j + 1]);
        }
    }
}
void Insertion(int *tab, int n)
{
    int x;
    int k;
    for (int i = 1; i < n; i++)
    {
        x = tab[i];
        k = i - 1;
        while (k >= 0 && tab[k] > x)
        {
            tab[k + 1] = tab[k];
            k--;
        }
        tab[k + 1] = x;
    }
}
void Selection(int *tab, int n)
{
    int index_min;
    for (int i = 0; i < n-1; i++)
    {
        index_min = i;
        for (int j = i+1; j < n; j++)
            if (tab[j] < tab[index_min])
                index_min = j;
        swap(tab[index_min], tab[i]);
    }
}
int main()
{
    int n;
    cin >> n;
    int *tab = new int[n];
    Generuj(tab, n);
    Wypisz(tab, n);
    //Bubble(tab, n);
    //Insertion(tab, n);
    Selection(tab, n);
    Wypisz(tab, n);
}
