#include <iostream>
#include <conio.h>
#include <math.h>
#include <cstdlib>
using namespace std ;
int main(){
        float a,b,c,delta;
    cout<<"podaj a"<<endl;
    cin>>a;
    cout<<"podaj b"<<endl;
    cin>>b;
    cout<<"podaj c"<<endl;
    cin>>c;

    delta= b*b-4*a*c;
    if(delta>0){
        cout << "x1="<<(-b-sqrt(delta))/(2*a)<<endl;
        cout << "x2="<<(-b+sqrt(delta))/(2*a)<<endl;
    }
    else if(delta==0){
        cout<<"x=" << -b/(2*a)<<endl;
    }
    else {
        cout <<"nie ma pierwiastkow"<<endl; //pomijaac liczby zespolone
    }

system("pause"); return 0;
}
