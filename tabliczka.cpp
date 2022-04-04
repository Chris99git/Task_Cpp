#include <iostream>
using namespace std;
int main()
{
    int arr[10][10];
    for (int w=0; w<10; w++)
    {
        for(int k=0; k<10; k++)
        {
            arr[w][k] = (w+11)*(k+11);
        }
    }
    cout << "\t";
    for (int k=0; k<10; k++)
    {
        cout << k+11 <<'\t';
    }
    cout << endl;
    for (int w=0; w<10; w++)
    {
        cout << w+11  << '\t';
        for(int k=0; k<10; k++)
        {
            cout << arr[w][k]  <<'\t';
        }
        cout << endl;
    }
    return 0;
}
