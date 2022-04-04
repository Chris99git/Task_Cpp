//Kody szesnastkowe
#include <iostream>
using namespace std;

int main()
{
    unsigned int liczba;
    cin >> hex >> liczba; //liczba wprowadzana z klawiatury to napis, dla strumienia wejsciowego nie ma znaczenia w jakim formacie liczbê podamy
    cout << liczba << endl;
    cout <<(char) liczba << endl; //znak to jakas liczba w pamiêci. Strumieñ wyjœciowy widz¹c, ¿e ma do czynienia z typem (char) wyœwietli znak, który siê pod tym kodem kryje
}
