#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    long long int a,suma=0;

    cin>>a;
    while(a>0)
    {


        switch(a%10)
        {
        case 0:
            suma+=6;
            break;
        case 1:
            suma+=2;
            break;
        case 2:
            suma+=5;
            break;
        case 3:
            suma+=5;
            break;
        case 4:
            suma+=4;
            break;
        case 5:
            suma+=5;
            break;
        case 6:
            suma+=5;
            break;
        case 7:
            suma+=3;
            break;
        case 8:
            suma+=7;
            break;
        case 9:
            suma+=6;
            break;

        }
        a=a/10;
    }
    cout<<suma;
    return 0;
}
