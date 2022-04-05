#include <iostream>
using namespace std;
int main()
{
char slowo[20];

cout << "Podaj slowo do wypisania od tylu:\n";
cin >> slowo;

for(int i=20; i>=0; i--)
{
cout << slowo[i];
}
return 0;
}
