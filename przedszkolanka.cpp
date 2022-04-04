#include <iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    if (n>=1&&n<=20)
        while(n>0)
        {
            int a,b;
            cin>>a;
            cin>>b;
            if(10<=a && b<=30)
            {
                int apocz = a;
                int bpocz = b;
                while(a != b)
                {
                    if(a > b)
                        b += bpocz;
                    else
                        a += apocz;
                }
                cout<<a << endl;
                n--;
            }
        }
}
