#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int j=0;
    for (int i=1; i<=3; i++)
    {
        cout<<"\n*** Petla - "<<i<<" ***"<<endl;
        cout<<"na poczatku j= "<<j<<endl;
        cout<<"++j= "<<++j<<endl;              //najpierw operator PREinkrementacji
        cout<<"teraz j= "<<j<<endl;
        cout<<"j++= "<<j++<<endl;              //potem operator POSTinkrementacji
        cout<<"na koncu j= "<<j<<endl;
    }
    system("PAUSE");
    return 0;
}
