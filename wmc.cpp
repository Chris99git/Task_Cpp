#include <iostream>
using namespace std;
int main()
{
    float wzrost, waga, wmc;

    cout << "Podaj wzrost:" << endl;
    cin >> wzrost;

    cout << "Podaj wage:" << endl;
    cin >> waga;

    wmc = waga/(wzrost*wzrost);
    if (wmc < 19)
    {
        cout <<  wmc << " NIEDOWAGA" << endl;
    }
    else if (wmc <= 25 && wmc >= 19)
    {
        cout <<  wmc << " NORMA" << endl;
    }
    else if (wmc <= 30 && wmc >= 25)
    {
        cout <<  wmc << " NADWAGA" << endl;
    }
    else
    {
        cout <<  wmc << " OTYLOSC" << endl;
    }
    return 0;
}
