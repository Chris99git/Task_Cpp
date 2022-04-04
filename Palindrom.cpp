#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i,j;
    string wyraz;
    cin >> wyraz;
    for (i = 0, j = wyraz.length()-1; i < j; i++, j--)
    {
        if (wyraz[i] != wyraz[j])
            break;
    }
    if (i < j)
        cout << "NIE" << endl;
    else
        cout << "TAK" << endl;
    return 0;
}
