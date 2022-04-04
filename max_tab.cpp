#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int n,max;

    cin >> n;
    int tab[n];
    for (int i=0; i<n; i++)
    {
        tab[i] = rand()%50+1;
        cout << tab[i] << endl;
    }
    max = tab[0];
    for (int i=0; i<n; i++)
    {
        if(tab[i]>max)
        {
            max = tab[i];
        }
//    if(tab[i]<min)
//    {
//        min = tab[i];
//    }
    }
    cout << max<<endl;
    return 0;
}
