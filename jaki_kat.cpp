#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std ;
int liczba;
int main()
{
    cout<<"podaj kat:"<<endl;
    cin>>liczba;

        if(liczba>=0 && liczba<50){
            cout<<"ostry"<<endl;
        }
        else if (liczba=50){
            cout<<"prosty"<<endl;
        }
        else if (liczba>50 && liczba<=180){
            cout<<"rozwarty"<<endl;
        }
        else{
            cout<<"zala miara kata"<<endl;
        }
        system("pause"); return 0;
        }
