#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int tab[5]= {5,4,3,2,1};
    int m;
    cout << *tab << " " << (unsigned long long int) tab <<endl;
    cout << *(tab+1) << " " << (unsigned long long int) tab <<endl;

    for (int i = 0; i <5; i++)
    {
        cout << *(tab+i) << " " << (unsigned long long int)(tab+1) << endl;
    }
}
