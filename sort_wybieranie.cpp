#include<iostream>
#include<cstdlib>
using namespace std;

void selection_sort(int tab[],int n) //n - ilo�� element�w do posortowania
{
int mn_index; //zmienna pomocnicza przechowuj�ca indeks kom�rki
        //z minimaln� warto�ci�
  for(int i=0;i<n-1;i++)
  {
  	mn_index = i;
    for(int j=i+1;j<n;j++) //p�tla wyszukuje najmniejszy element w podzbiorze nieposortowanym
    if(tab[j]<tab[mn_index])
      mn_index = j;

    //zamiana elementu najmniejszego w podzbiorze z pierwsz� pozycj� nieposortowan�
	swap(tab[i], tab[mn_index]);
  }
}

int main()
{
	int *tab, n;

	cout<<"Ile liczb chcesz posortowa�? ";
	cin>>n;

	tab = new int [n];
	for(int i=0;i<n;i++)
		cin>>tab[i]; //wczytanie liczb do posortowania

	selection_sort(tab,n); //sortowanie przez selekcj�

	for(int i=0;i<n;i++)
		cout<<tab[i]<<" "; //wypisanie posortowanych element�w

	cout<<endl;
	system("pause");
	return 0;
}
