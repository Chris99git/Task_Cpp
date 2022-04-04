#include <iostream>
using namespace std;
int main()
{
    int x, n;
    int first = - 1, last = - 1;  
    int value;                    

    cin >> n >> x;
    for( int i = 1; i <= n; ++i )
    {
        cin >> value;
        if( value == x )
        {
            if( first == - 1 )
            {
                first = i;
            }
            last = i;
        }
    }
    cout << first << " " << last;
}
