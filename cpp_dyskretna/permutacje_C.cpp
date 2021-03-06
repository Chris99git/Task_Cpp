#include <stdio.h>

char permutacja[11];
int litery[11];

void generuj(int pozycja, int n) {
    if (pozycja == n) {
        for (int i = 0; i < n; i++)
            printf("%c", permutacja[i]);
        printf("\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!litery[i]) {
            permutacja[pozycja] = (char)(i + 'a');
            litery[i] = 1;
            generuj(pozycja + 1, n);
            litery[i] = 0;
        }
    }
}
int main() {
    int t, n;
    int zestawLiter[11];
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        generuj(0, n);
    }
}
