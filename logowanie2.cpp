#include <iostream>
using namespace std;
int main()
{
    int logowanie[20][2]={{1,11111},{3,333},{5,1234},{6,2222}};
    int login,haslo,n = 0;
    cout << "Podaj nazwe uzytkownika:";
    cin >> login;
    cout << "Podaj haslo: ";
    cin >> haslo;
    while(n<20)
    {
        if(login==logowanie[n][0])
        {
            if (haslo==logowanie[n][1])
            {
                cout << "Logowanie przebieglo pomyslnie." << endl;
            }
            else
            {
                cout << "haslo niepoprawne " << endl;
            }
           break;
        }
        else
        {
            n++;
            if (n==19)
                  login=0;
        }
    }
    if (login==0)
         cout << "Nie ma takiego uzytkownika w bazie" << endl;
return 0;
}
