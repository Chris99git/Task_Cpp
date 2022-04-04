#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
using namespace std;
float a,b;
char choice;
int main()
{
for(;;)
{
    cout << "wybierz figure:" << endl;
    cout << "t. trojkat prostokatny" << endl;
    cout << "k. kwadrat" << endl;
    cout << "p. prostokat" << endl;
    cout << "e. Koniec programu" << endl;
    cout << endl;
    choice=getch();

    switch(choice)
    {
    case 't':
    cout << "trojkat prostokatny" << endl;
    cout << "Podaj a ";
    cin >> a;
    cout << "Podaj b ";
    cin >> b;
    cout<<"pole= "<<(a*b)/2;
    break;

    case 'k':
        cout << "kwadrat" << endl;
        cout << "Podaj bok kwadratu: ";
        cin >> a;
        cout<<"pole= "<<a*a;
    break;

    case 'p':
    cout << "prostokat" << endl;
    cout << "Podaj a ";
    cin >> a;
    cout << "Podaj b ";
    cin >> b;
    cout<<"pole= "<<a*b;
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
