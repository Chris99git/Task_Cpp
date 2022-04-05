#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
void SortWyb(long long int *tab, long long int n) {
	long long int dMIN, tmp;
	for (int i = 0; i < 4; i++) {
		dMIN = i;
		for (long long int j = i + 1; j < n; j++) {
			if (tab[j] > tab[dMIN])dMIN = j;}
		tmp = tab[i];
		tab[i] = tab[dMIN];
		tab[dMIN] = tmp;
	}
}
int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);
	cout.tie(nullptr);
	long long int n;
	cin >> n;
	long long int tab[n];
	for (int i = 0; i < n; i++)cin >> tab[i];
	if (n < 4)cout << 0;
	else {
		SortWyb(tab, n);
		cout << tab[3] * tab[3];}
	return 0;
}