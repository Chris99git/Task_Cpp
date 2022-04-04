#include <iostream>
#include <string>

using namespace std;

int main()
{
    string src;
    int n;
    cin >> n;

    for (int i=0; i<=n; i++)
    {
        getline(cin, src);
        for (int i = 0; i < src.length() / 2; i++)
            cout << src[i];
        cout << endl;
    }
    return 0;
}
