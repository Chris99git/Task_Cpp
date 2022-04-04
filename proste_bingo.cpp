#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std ;
int liczba;
int main()
{
    cout<<"podaj liczbe:"<<endl;
    cin>>liczba;

    if(liczba<5){
        cout<<"to za malo";
    }
        else if (liczba>10){
            cout<<"za malo";
        }
        else{
            cout<<"bigo";
        }
system("Pause");
    return 0;
}
