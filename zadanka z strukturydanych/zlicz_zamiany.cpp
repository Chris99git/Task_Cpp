#include <iostream>
#include <cstdlib>
using namespace std;

int fun(int arr[], int n)
{
    int s = 0;
    for(int i = 0; i<n-1; i++)
    {
        for(int j=0; j < n - i - 1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                s++;
            }
        }
    }
    return s;
}
int main()
{
    int n;
    cin>>n;
    int tab[n];
    for(int i=0; i<n; i++)
    {
        cin>>tab[i];
    }
    cout<<fun(tab,n);
    return 0;
}
