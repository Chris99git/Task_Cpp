#include<iostream>
using namespace std;

int n,b=0;
int tab[20000];

int main()
{
    cin>>n;
    if(n==1)
    {
        cin>>b;
        cout<<b;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            cin>>tab[i];
            b=b+tab[i];
        }
        for(int j=0; j<n; j++)
        {
            cout<<b<<" ";
            b=b-tab[j];
        }
    }
    return 0;
}
