#include <iostream>
#include <cmath>
using namespace std;
class Podzbiory
{
private:
    int x;
    char* tablica;
public:
    Podzbiory(int x)
        :x(x)
    {
        tablica = new char[x];
    }
    ~Podzbiory()
    {
        delete[]tablica;
    }
    void Wpisz()
    {
        for (int i = 0; i < x; i++)
        {
            cin >> tablica[i];
        }
    }
    void Szukanie()
    {
        int  count = pow(2, x);
        cout << count << endl;
        cout << "0 : {}"<<endl;
        for (int i = 1; i < count; i++)
        {
            cout << i <<" : ";
            cout << "{";
            for (int j = 0; j < x; j++)
            {
                if ((i & (1 << j)) > 0)
                {
                    cout << tablica[j];
                }
            }
            cout << "}" << endl;
        }
    }
};
int main()
{
    int x;
    cin >> x;
    Podzbiory p1(x);
    p1.Wpisz();
    p1.Szukanie();
}
