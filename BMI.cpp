#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    string * imiona = new string[t];
    double * bmi = new double[t];
    int waga, wzrost;
    for (int i = 0; i < t; i++)
    {
        cin >> imiona[i] >> waga >> wzrost;
        bmi[i] = waga / (wzrost / 100.0 * wzrost / 100.0);
    }
    cout << "niedowaga" << endl;
    for (int i = 0; i < t; i++)
        if (bmi[i] < 18.5)
            cout << imiona[i] << endl;
    cout << "\nwartosc prawidlowa" << endl;
    for (int i = 0; i < t; i++)
        if (bmi[i] >= 18.5 && bmi[i] < 25.0)
            cout << imiona[i] << endl;
    cout << "\nnadwaga" << endl;
    for (int i = 0; i < t; i++)
        if (bmi[i] >= 25.0)
            cout << imiona[i] << endl;
    delete[] bmi;
    delete[] imiona;
    return 0;
}
