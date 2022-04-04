#include <iostream>
using namespace std;

int main()
{
    float tab[5];
    float sum,avg;
    sum,avg = 0;
    for (int i=0; i<5; i++)
    {
        cin >> tab[i];
        sum += tab[i];
        avg = sum/(i+1);
        cout << "srednia " << avg << endl;

    }
    for (int i=0; i<5; i++)
    {

        if(tab<0)
        {
            break;
        }
        {
            if((tab[i] >= -5 && tab[i]<=5) && tab != 0)
            {
                cout << "TAJNA ";
            }
            else
            {
                cout << tab[i] << " ";
            }
        }
        return 0;
    }
}
