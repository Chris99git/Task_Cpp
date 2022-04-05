#include <iostream>
#include <cstdio>
const int MAXSIZE = 1000000;
int tab[MAXSIZE];
void Zamiana(int& a, int& b);
void Tworzenie(int* tab, int n);
void PrzesiewanieGora(int* tab, int i);
void PrzesiewanieDol(int* tab, int n, int i);
void Wypisanie(int* tab, int n);
int Ext(int* tab, int& n);
void Tworzenie(int* tab, int n)
{
	for (int i = n / 2; i >= 1; i--) PrzesiewanieDol(tab, n, i);
}
void Zamiana(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void PrzesiewanieGora(int* tab, int i)
{
	while (i > 1 && tab[i / 2] > tab[i])
	{
		Zamiana(tab[i / 2], tab[i]);
		i /= 2;
	}
}
void PrzesiewanieDol(int* tab, int n, int i)
{
	int j = i * 2;
	while (j <= n)
	{
		if (j < n && tab[j] > tab[j + 1]) j++;
		if (tab[i] <= tab[j]) break;
		Zamiana(tab[i], tab[j]);
		i = j;
		j = i * 2;
	}
}
void Wypisanie(int* tab, int n)
{
	for (int i = 1; i <= n; i++)
		printf("%d ", tab[i]);
	printf("\n");
}
int Ext(int* tab, int& n)
{
	Zamiana(tab[1], tab[n--]);
	PrzesiewanieDol(tab, n, 1);
	return tab[n + 1];
}
int main()
{
	int t;
	scanf("%d", &t);
	int n, m;
	char litera;
	while (t--)
	{
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
			scanf("%d", tab + i);
		Tworzenie(tab, n);
		scanf("%d", &m);
		while (m--)
		{
			scanf(" %c", &litera);
			if (litera == 'E') printf("%d\n", Ext(tab, n));
			else Wypisanie(tab, n);
		}
	}
	return 0;
}