#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std ;
int liczba;
int main()
{
    cout<<"podaj punkty:"<<endl;
    cin>>liczba;

        if(liczba>=0 && liczba<=50){
            cout<<"nst"<<endl;
        }
        else if (liczba>=51 && liczba<=60){
            cout<<"mrn"<<endl;
        }
        else if (liczba>=61 && liczba<=70){
            cout<<"dst"<<endl;
        }
        else if (liczba>=71 && liczba<=80){
            cout<<"db"<<endl;
        }
        else if (liczba>=81 && liczba<=90){
            cout<<"bdb"<<endl;
        }
        else if (liczba>=91 && liczba<=100){
            cout<<"cel"<<endl;
        }
        else{
            cout<<"zala ilosc punktow"<<endl;
        }
        system("pause"); return 0;
        }
