#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int t,c,k,w;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        cin>>c>>k>>w;
        if(k>=c*w)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
