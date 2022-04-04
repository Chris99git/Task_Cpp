#include <iostream>
#include <cstdlib>
using namespace std;
int main(){

    int n;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        for(int s=0;s<n+1-i;s++)
            cout<<' ';
        for(int g=0;g<2*i+1;g++)
            cout<<'*';
        cout<<endl;
    }
    for(int i=0;i<n+1;i++)
    {
        for(int s=0;s<n+1-i;s++)
            cout<<' ';
        for(int g=0;g<2*i+1;g++)
            cout<<'*';
        cout<<endl;
    }

}

