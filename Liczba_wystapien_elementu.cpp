#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int n,x,pow;
    cin>>n;
    int tab[n];
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        tab[i] = rand()%11;
    }
    for(int i=0; i<n; i++)
    {
        cout <<tab[i]<<" ";
    }
    cout <<endl;
    cin>>x;
    for(int i=0; i<n; i++)
    {
        if(tab[i]==x)
        {
            pow=pow+1;
        }
    }
    cout<<pow;
}
