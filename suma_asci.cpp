#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    char n = 0;
    while (sum < 500) {
        cin >> n;
        sum += n;
        cout << sum << endl;
    }
    return 0;
}
