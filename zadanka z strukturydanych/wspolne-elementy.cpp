#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
void elementy(int* A, int n, int* B, int m, int* C)
{
    int i = 0, j = 0, k = 0;
    while ((i < n) && (j < m))
    {
        if (A[i] == B[j])
        {
            C[k] = A[i];
            k++;
            i++;
            j++;
        }
        else if (A[i] < B[j]) i++;
        else j++;
    }
    cout << k << endl;
    for (int i = 0; i < k; i++)
    {
        cout << C[i];
        if (i < k - 1) cout << ", ";
    }
}
int main()
{
    int m, n, wieksza;
    cin >> m >> n;
    if (m > n) wieksza = m;
    else wieksza = n;
    int A[m], B[n], C[wieksza];
    for (int i = 0; i < m; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> B[i];
    elementy(A, m, B, n, C);
    return 0;
}