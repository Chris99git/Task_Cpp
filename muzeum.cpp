#include <iostream>
using namespace std;

int main()
{
    int licznik = 0;
    int g, p;
    cin >> g;  //pobranie pierwszego pomiaru
    p=g; //zapamietanie tego pomiaru zminna pomocnicza

    while (g != -1)
    {
        cin >> g; //pobranie drugiego pomiaru
        if(g > p)  //sprawdzenia pomiar�w - pierwszego z drugim (poprzedniego z kolejnym)
        {
            licznik++;//je�eli kolejny pomiar jest wi�kszy od poprzedniego (na poczatku por�wnujemy drugi z pierwszym), to zwiekszamy licznik
                      //je�eli pomiary beda r�wne, nie wejdziemy do ifa, czyli licznik nie zostanie zwiekszony;
            p=g;      //zapamietujemy kolejny pomiar, kt�ry przy nastepnym przej�ciu petli stanie sie tym poprzednim pomiarem
        }
    }
    cout << licznik << endl;
    return(0);
}
