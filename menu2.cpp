#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <math.h>
using namespace std;
float a,b,c,h,r;
char choice;
int main()
{
for(;;)
{
    cout << "wybierz figure:" << endl;
    cout << "S lub s - szescian"<< endl;
    cout << "P lub p - prostopadloscian"<< endl;
    cout << "W lub w - walec"<< endl;
    cout << "K lub k - kula"<< endl;
    cout << "e. Koniec programu" << endl;
    cout << endl;
    choice=getch();

    switch(choice)
    {
        case 'S':
    case 's':
    cout << "szescian" << endl;
    cout <<"podaj a "<< endl;
    cin>> a;
    cout <<"pole powierzchni to "<<6*a*a<< endl;
    cout <<"objetosc to "<<a*a*a<< endl;
    break;

        case 'P':
    case 'p':
    cout << "prostopadloscian" << endl;
    cout <<"podaj a "<< endl;
    cin>> a;
    cout <<"podaj b "<< endl;
    cin>> b;
    cout <<"podaj c "<< endl;
    cin>> c;
    cout <<"pole powierzchni to "<<2*a*b+2*a*c+2*b*c<< endl;
    cout <<"objetosc to "<<a*b*c<< endl;
    break;

        case 'W':
    case 'w':
    cout << "walec" << endl;
    cout <<"podaj r "<< endl;
    cin>> r;
    cout <<"podaj h "<< endl;
    cin>> h;
    cout <<"pole powierzchni to "<<(2*M_PI*r*r)+(2*M_PI*r*h)<< endl;
    cout<< "objetosc to "<<M_PI*r*r*h<<endl;

    break;

       case 'K':
    case 'k':
    cout << "kula" << endl;
    cout <<"podaj R "<< endl;
    cin>> r;
    cout <<"pole powierzchni to "<<4*M_PI*r*r<< endl;
    cout<< "objetosc to "<<4.0/3.0*M_PI*r*r*r<<endl;
    break;

    case 'e':
            exit(0);
    break;

    default: cout<<"Nie ma takiej opcji w menu!";
    }
    getchar();getchar();
    system("cls");
}
    return 0;
}
