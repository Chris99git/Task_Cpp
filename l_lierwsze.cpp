#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a; i<=b; i++)
    {
        int div;
        if(i%2==0 && i!=2)
        {
            continue;
        }
        for(div=2; div<i; div++)
        {
            if (i%div==0)
            {
                break;
            }
        }
        if(div==i)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
