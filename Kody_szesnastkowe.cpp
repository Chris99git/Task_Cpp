//Kody szesnastkowe
#include <iostream>
using namespace std;

int main()
{
    unsigned int liczba;
    cin >> hex >> liczba; //liczba wprowadzana z klawiatury to napis, dla strumienia wejsciowego nie ma znaczenia w jakim formacie liczb� podamy
    cout << liczba << endl;
    cout <<(char) liczba << endl; //znak to jakas liczba w pami�ci. Strumie� wyj�ciowy widz�c, �e ma do czynienia z typem (char) wy�wietli znak, kt�ry si� pod tym kodem kryje
}
