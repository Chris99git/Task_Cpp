#include <iostream>
using namespace std;
int t, n;
int main()
{
    cin>>t;                
    for(int i=0; i<t; i++)
    {
        cin>>n;
        int tab [n];   
        for(int i=0; i<n; i++)
        {
            cin>>tab[i];      
        }
        for(int i=n-1; i>=0; i--)
        {
            cout<<tab[i]<<" ";
        }
    }
    return 0;
}
