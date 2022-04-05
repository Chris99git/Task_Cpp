#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;
bool kolejna(int* tablica, int x, int y);
void wypisz(int* tablica, int y);

int main()
{
    int x, y;
    cin >> x;
    cin >> y;

    int* tablica = (int*)malloc(y * sizeof(int));
    for (int i = 0; i < y; i++)
        tablica[i] = i + 1;
    wypisz(tablica, y);
    cout << endl;
    while (kolejna(tablica, x, y))
    {
        wypisz(tablica, y);
        cout << endl;
    }
    free(tablica);
    return 0;
}
bool kolejna(int* tablica, int x, int y)
{
    int i = y - 1;
    while (i >= 0 && tablica[i] > x + i - y)
        i--;
    if (i < 0)
        return false;
    tablica[i]++;
    for (int j = i + 1; j < y; j++)
        tablica[j] = tablica[i] + j - i;
    return true;
}
void wypisz(int* tablica, int y)
{
    cout << "(";
    for (int i = 0; i < y - 1; i++)
        cout << tablica[i]<<", ";
    cout << tablica[y - 1] <<")";
}