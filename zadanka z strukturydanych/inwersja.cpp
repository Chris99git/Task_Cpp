#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
long long A[1000000], B[1000000];

void MergeSort(int p, int q)
{
    if (p == q)
        return;
    int s = (p + q) / 2;
    MergeSort(p, s);
    MergeSort(s + 1, q);

    int i = p;
    int j = s + 1;
    for (int k = p; k <= q; k++)
        if (j > q || (i <= s && A[i] < A[j])) {
            B[k] = A[i];
            i++;
        }
        else {
            B[k] = A[j];
            j++;
        }
    for (int k = p; k <= q; k++)
        A[k] = B[k];
}
int main()
{
    int n, ilosc = 0;
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] > A[j]) {
                ilosc++;
            }
        }
    }
    MergeSort(0, n - 1);
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << "\n" << ilosc;
    return 0;
}
