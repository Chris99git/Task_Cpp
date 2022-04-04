#include <iostream>
using namespace std;
int main()
{
    int logowanie [20][2]= {{1,11111},{3,333},{5,1234},{6,2222}};
    int login, haslo, n=0;
    cout<<"podaj nazwe uzytkownika ";
    cin>> login;
    cout<<"podaj haslo: ";
    cin>> haslo;
    while (n<20)
    {
        if (login==logowanie[n][0])
        {
            if (haslo==logowanie[n][1])
            {
                cout<<"logowanie pomyslne"<<endl;
            }
            else
            {
                cout<<"haslo nie poprawne"<<endl;
            }
            break;
        }
            n++;
    }
    if (n==20)
    {
        cout<<"nie poprawne"<<endl;
    }

}
