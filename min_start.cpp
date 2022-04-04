#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

    srand(time(NULL));
    int n,najmniejszy,miejsce=0, tmp;
    cin>>n;
    int tab[n];
    for (int i=0; i<n; i++)
    {
        tab[i]=(rand()%50)+1;
    }
    najmniejszy = tab[0];
    for (int i=0; i<n; i++)
    {
        if(najmniejszy>tab[i])
        {
            najmniejszy=tab[i];
            miejsce=i;
        }
    }
    tmp=tab[0];
    tab[0]=najmniejszy;
    tab[miejsce]=tmp;
    for (int i=0; i<n; i++)
    {
        cout<<tab[i]<<" ";
    }
    return 0;
}
