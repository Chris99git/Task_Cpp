#include <cstdlib>
#include <cstdio>
#include <iostream>
static const int kSize = 20000;
void merge(int* tab, int left, int middle, int right)
{
    static int tmp[kSize];
    for (int i = left; i <= right; i++)
        tmp[i] = tab[i];
    int i = left;
    int j = middle + 1;
    int k = left;
    while (i <= middle && j <= right)
        if (tmp[i] <= tmp[j])
            tab[k++] = tmp[i++];
        else
            tab[k++] = tmp[j++];
    while (i <= middle)
        tab[k++] = tmp[i++];
    while (j <= right)
        tab[k++] = tmp[j++];
}
void mergeSort(int* tab, int left, int right)
{
    if (left < right){
        int middle = (left + right) / 2;
        mergeSort(tab, left, middle);
        mergeSort(tab, middle + 1, right);
        merge(tab, left, middle, right);
    }
}
int main()
{
    int tab[kSize];
    int n;
    scanf("%d", &n);
    int wynik = 0;
    if (n){
        for (int i = 0; i < n; i++)
            scanf("%d", tab + i);
        mergeSort(tab, 0, n - 1);
        wynik++;
        for (int i = 1; i < n; i++)
            if (tab[i] != tab[i - 1])
                wynik++;
    }
    printf("%d", wynik);
    return 0;
}