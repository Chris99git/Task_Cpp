#include <iostream>
using namespace std;
int main()
{
    int  stos[256], ws = 0;
    int  a, b, w;
    char el[256];
    while (cin >> el)
    {
        if (el[0] >= '0' && el[0] <= '9')
        {
            a = b = 0;
            do
                a = 10 * a + el[b++] - 48;
            while (el[b]);
            stos[ws++] = a;
        }
        else if (el[0] == '=')
            cout << stos[--ws] << endl;
        else
        {
            b = stos[--ws];
            a = stos[--ws];

            switch (el[0])
            {
            case '+':
                w = a + b;
                break;
            case '-':
                w = a - b;
                break;
            case '*':
                w = a * b;
                break;
            case '/':
                w = a / b;
                break;
            case '^':
                w = 1;
                while (b--)
                    w *= a;
                break;
            }
            stos[ws++] = w;
        }
    }
    cout << stos[ws - 1];
    return 0;
}
