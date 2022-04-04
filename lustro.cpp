#include <iostream>
using namespace std;

int main()
{
    int n;
    int l = 0;
    cin >> n;
    while( n )    //Samo n dzia³a jak n != 0, poniewa¿ zachodzi tam niejawne rzutowanie bool(n)
    {
        l = l * 10 + n % 10;
        n /= 10;
    }
    cout << l << endl;
    return(0);
}
