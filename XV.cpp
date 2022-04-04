#include <iostream>
using namespace std;
int main()
{
long long int l;
while ( cin >> l)
{
 if ( l == 0 )
   break;
 if ( l % 15 == 0 )
   cout << "TAK\n";
 else if ( l % 15 != 0 )
   cout << "NIE\n";
}
}
