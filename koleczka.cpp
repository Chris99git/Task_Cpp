#include <iostream>
using namespace std;

int main()
{
    long long int liczba;
    int cyfra, suma;
    cin >> liczba;
    suma = 0;
    if (liczba == 0) {
        cout << "1";
        return 0;
    }
    while (liczba > 0) {
        cyfra = liczba % 10;

        switch (cyfra) {
        case 0:
            suma += 1;
            break;
        case 6:
            suma += 1;
            break;
        case 8:
            suma += 2;
            break;
        case 9:
            suma += 1;
            break;
        }
        liczba = liczba / 10;
    }
    cout << suma << endl;
    return 0;
}
