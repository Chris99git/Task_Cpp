#include <iostream>
using namespace std;
int main()
{
    int ilosc;
    cin>>ilosc;
    for (int i=0; i<ilosc; i++)
    {
        int a,b;
        cin>>a>>b;
        while(a!=b)
        {
            if (a<b)
            {
                b=b-a;
            }
            else if (b<a)
            {
                a=a-b;
            }
        }
        if (b=a)
        {
            cout<<a+b<< endl;
        }
    }
    return 0;
}
