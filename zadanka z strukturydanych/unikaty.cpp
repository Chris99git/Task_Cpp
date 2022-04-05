#include<cstdio>
int a[20000], b[2000];
void merge(int* a, int* b, int p, int q, int r) // scalanie tablic
{
    int i = p;
    int j = q + 1;
    int k = p;
    while (i <= q && j <= r){
        if (a[i] < a[j]){
            b[k] = a[i];
            i++;
        }
        else{
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= q){
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= r){
        b[k] = a[j];
        j++;
        k++;
    }
    for (int c = p; c <= r; c++) // przepisuje tablice a do tablicy b
        a[c] = b[c];
}
void mergesort(int* a, int* b, int p, int r)
{
    if (p != r){
        int q = (p + r) / 2;
        mergesort(a, b, p, q);
        mergesort(a, b, q + 1, r);
        merge(a, b, p, q, r);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    mergesort(a, b, 0, n - 1);
    int w = 1;
    for (int i = 1; i < n; i++)    // zlicza ilosc liczb, ktore wytapily
    {
        if (a[i] != a[i - 1])
            w++;
    }
    printf("%d", w);
    return 0;
}