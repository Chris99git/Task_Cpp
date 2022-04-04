#include<iostream>
using namespace std;

int main ()
{
    int n,a=1;
    cin >> n;
    do
    {
        cout<<a<<endl;
        a*=2;
    }
    while(a<=n);
    return 0;
    system("pause"); return 0;
}
