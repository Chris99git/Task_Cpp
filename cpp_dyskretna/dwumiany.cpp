#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
unsigned long long int d(unsigned int n, unsigned int k)
{
    if (k == 0 || k == n) return 1;
    if (n > 0 && k > 0 && n > k) return d(n - 1, k) + d(n - 1, k - 1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    int ile;
    cin >> ile;
    for (int i = 0; i < ile; i++)
    {
        unsigned long long int a, b;
        cin >> a >> b;
        cout << d(a, b) << endl;
    }
    return 0;
}
