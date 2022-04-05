#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x;
    cin>> x;
    int* tablica = new int[x];
    for(int i = 0; i < x; i++)
    {
        tablica[i] = i;
    }
    sort(tablica, tablica + x);
    do
    {
        cout<<"(";
        for (int i = 0; i < x; i++)
        {
            cout<< tablica[i];
            if (i < x - 1)
                cout <<", ";
        }
        cout<<")"<<endl;
    }
    while (next_permutation(tablica, tablica + x));
    return 0;
}
