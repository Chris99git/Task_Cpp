#include <cstdlib>
#include <cstdio>
#include <iostream>
struct Stack
{
    int x; //wartosc key
    Stack* parent; // wskaznik na rodzica
    Stack* leftChild; // wskaznik na lewego potomka
    Stack* rightChild; // wskaznik na prawego potomka
};

void tworzenie(Stack*& root);  // wstaniwie nowego elementu na drzewa
void clear(Stack*& root); // usuniecie wszystkich elementow
void wyszukiwanie(Stack*& root, int x); //szukanie adresu pierwszego elementu o danej wartosci
void usowanie(Stack*& root, int x);  // usuwanie elementu z drzewa
Stack* odnajdowanie(Stack* stack, int x); // odnajdowywanie 
Stack* poprzednik(Stack* stack); // szukanie poprzednika
Stack* nastepca(Stack* stack); // szukanie nastepnika
Stack* min(Stack* stack);    // szukanie adresu elementu z minimalna wartoscia
Stack* max(Stack* stack);   // szukanie adresu elementu z maksymalna wartoscia
void preOrder(Stack* stack); // wyswietlenie drzewa w porzadku pre-order
void inOrder(Stack* stack); // wyswietlenie drzewa w porzadku in-order
void postOrder(Stack* stack); // wyswietlenie drzewa w porzadku post-order

int main()
{
    int t;
    scanf("%d", &t); 
    Stack* drzewo; // ustaw wskaznik korzen, nowy element
    Stack* temp=NULL; //nowy element, tymczasowy na NULL
    int n;
    char option;
    int value;

    for (int i = 1; i <= t; i++)
    {
        tworzenie(drzewo);
        printf("test %d\n", i);
        scanf("%d", &n);
        while (n--)
        {
            scanf(" %c%d", &option, &value);
            switch (option)
            {
            case 'I':
                wyszukiwanie(drzewo, value);
                break;
            case 'D':
                usowanie(drzewo, value);
                break;
            case 'S':
                if (odnajdowanie(drzewo, value)) printf("%d\n", value);
                else printf("-\n");
                break;
            case 'X':
                if (value) printf("%d\n", max(drzewo)->x);
                else printf("%d\n", min(drzewo)->x);
                break;
            case 'N':
                temp = odnajdowanie(drzewo, value);
                if (temp)
                {
                    temp = nastepca(temp);
                    if (temp) printf("%d\n", temp->x);
                    else printf("-\n");
                }
                else printf("-\n");
                break;
            case 'P':
                temp = odnajdowanie(drzewo, value);
                if (temp)
                {
                    temp = poprzednik(temp);
                    if (temp) printf("%d\n", temp->x);
                    else printf("-\n");
                }
                else printf("-\n");
                break;
            case 'R':
                switch (value)
                {
                case 0:
                    inOrder(drzewo);
                    printf("\n");
                    break;
                case 1:
                    preOrder(drzewo);
                    printf("\n");
                    break;
                case 2:
                    postOrder(drzewo);
                    printf("\n");
                    break;
                }
                break;
            }
        }
        clear(drzewo);
    }
}

void tworzenie(Stack*& root) // root -> wskaznik na korzen drzewa(poddrzewa)
{
    root = NULL;
}

void clear(Stack*& root) // root -> wskaznik na korzen drzewa(poddrzewa)
{
    if (root)
    {
        clear(root->leftChild); // czyszczenie lini lewego potomka
        clear(root->rightChild); // czyszczenie lini prawego potomka
        free(root); // zwolnij element
    }
}

void wyszukiwanie(Stack*& root, int x) // root -> wskaznik na korzen drzewa(poddrzewa), x --> wskaznik na element ktory chcemy wyszukac
{
    Stack* temp = (Stack*)malloc(sizeof(Stack));
    temp->x = x;
    temp->leftChild = NULL;
    temp->rightChild = NULL;
    Stack* i = root;
    Stack* j = NULL;

    while (i)
    {
        j = i;
        if (i->x > x) i = i->leftChild; // jezeli wartosc szukana jest mniejsza od wartosci klucza korzenia to do lewego potomka
        else i = i->rightChild; // w przeciwnym wypadku do prawego potomka
    }
    temp->parent = j;
    if (j)
    {
        if (j->x > x) j->leftChild = temp;
        else j->rightChild = temp;
    }
    else root = temp;
}

void usowanie(Stack*& root, int x) // root -> wskaznik na korzen drzewa(poddrzewa), x --> wskaznik na element ktory chcemy usunac
{
    Stack* temp = odnajdowanie(root, x); 

    if (temp)
    {
        Stack* i = NULL;
        Stack* j = NULL;

        if (!temp->leftChild || !temp->rightChild) i = temp; // temp różne lewemu potomkowi lub prawemu 
        else i = poprzednik(temp);
        if (i->leftChild) j = i->leftChild;
        else j = i->rightChild;
        if (j) j->parent = i->parent;
        if (!i->parent) root = j;
        else
            if (i == i->parent->leftChild) 
                i->parent->leftChild = j;
            else
                i->parent->rightChild = j;
        if (i != temp) temp->x = i->x;
        free(i);
    }
}

Stack* odnajdowanie(Stack* stack, int x)
{
    while (stack && stack->x != x)
    {
        if (stack->x > x) stack = stack->leftChild; // adres korzenia = adresowi lewego potomka
        else stack = stack->rightChild; // adres korzenia = adresowi prawego potomka
    }
    return stack; // zwroc adres
}

Stack* poprzednik(Stack* stack) // wskaznik na korzen drzewa(poddrzewa)
{
    if (stack->leftChild) return max(stack->leftChild); // jeżeli istnieje lewy potomek, zwroc adres do wartosci najwiekszego lewego potomka

    Stack* i = stack->parent; // ustawiamy na adres rodzica elementu dla ktorego szukamy nastepnik
    while (i && i->rightChild != stack) // dopoki istnieje rodzic elementu i element jest rowny prawemu potomkowi swojego rodzica
    {
        stack = i; // element dla ktorego szukamy nastepnik rowny jest swojemu rodzicowi
        i = i->parent; // a rodzic rowny jest swojemu rodzicowi
    }
    return i; // zwroc adres elementu
}

Stack* nastepca(Stack* stack) // wskaznik na korzen drzewa(poddrzewa)
{
    if (stack->rightChild != NULL) // jeżeli istnieje prawy potomek
        return min(stack->rightChild); // zwroc adres do wartosci najmnijeszej prawego potomka

    Stack* i = stack->parent;  // ustawiamy na adres rodzica elementu dla ktorego szukamy nastepcy
    while (i && i->leftChild != stack) // dopoki istnieje rodzic elementu i element jest rowny prawemu potomkowi swojego rodzica
    {
        stack = i; // element dla ktorego szukamy nastepnik rowny jest swojemu rodzicowi
        i = i->parent; // a rodzic rowny jest swojemu rodzicowi
    }
    return i; // zwroc adres elementu
}

Stack* min(Stack* stack) // stack -> wskaznik na korzen drzewa (poddrzewa)
{
    while (stack->leftChild != NULL) // dopoki istnieje lewy potomek
        stack = stack->leftChild; // adres korzenia = adresowi lewego potomka
    return stack; // zwroc adres elementu
}

Stack* max(Stack* stack) // stack -> wskaznik na korzen drzewa (poddrzewa)
{
    while (stack->rightChild != NULL) // dopoki istnieje prawy potomek
        stack = stack->rightChild; // adres korzenia = adresowi prawego potomka
    return stack; // zwroc adres elementu
}

void preOrder(Stack* stack) // stack -> wskaznik na korzen drzewa (poddrzewa)
{
    if (stack)
    {
        printf("%d ", stack->x); // wypisz wartosc x elementu
        preOrder(stack->leftChild);
        preOrder(stack->rightChild); 
    }
}

void inOrder(Stack* stack) // stack -> wskaznik na korzen drzewa (poddrzewa)
{
    if (stack)
    {
        inOrder(stack->leftChild);
        printf("%d ", stack->x); // wypisz wartosc x (key) elementu
        inOrder(stack->rightChild);
    }
}

void postOrder(Stack* stack) // stack -> wskaznik na korzen drzewa (poddrzewa)
{
    if (stack)
    {
        postOrder(stack->leftChild);
        postOrder(stack->rightChild);
        printf("%d ", stack->x); // wypisz wartosc x (key) elementu
    }
}