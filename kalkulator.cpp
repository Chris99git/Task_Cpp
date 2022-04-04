#include <iostream>
using namespace std;
int main()
{
    unsigned short int r[10];
    int q, w;
    char k;
    for(; cin>>k>>q>>w;)
    {
        --q;
        switch(k)
        {
        case 'z':
            r[q]=w;
            break;

        case '+':
            cout<<r[q]+r[w-1]<<endl;
            break;

        case '-':
            cout<<r[q]-r[w-1]<<endl;
            break;

        case '*':
            cout<<r[q]*r[w-1]<<endl;
            break;

        case '/':
            cout<<r[q]/r[w-1]<<endl;
            break;

        case '%':
            cout<<r[q]%r[w-1]<<endl;
            break;
        }
    }
    return 0;
}
