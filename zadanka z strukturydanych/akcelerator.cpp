#include <iostream>
#include <cstdio>
using namespace std;
long szukaj_pierwszej(long first, long end, long x, long *tablica)//wyszukiwanie binarne
{  
    long srodek;
    while (first < end){
        srodek = (first + end) / 2;
        if(tablica[srodek] >= x)
            end = srodek;
        else
            first = srodek + 1;
    }
    if(tablica[first]==x){
        return first;
    }
    else{
        return -1;
    }
}
long szukaj_ostatniej(long first, long end, long x, long *tablica){
    long srodek;
    while (first < end){
        srodek = (first + end+1) / 2;
        if(tablica[srodek] <= x)
            first = srodek;
        else
            end = srodek - 1;
    }
    if(tablica[first]==x){
        return first;
    }
    else{
        return -1;
    }
}
int main()
{
    long liczba_czastek;
    scanf ("%ld",&liczba_czastek);
    long  ciag [liczba_czastek];
    long indeks_drugiej_szukanej;
    long ilosc_wystapien ;
    long liczba_szukana ;
    long indeks_pierwszej_szukanej ;
    for(long i=0; i<liczba_czastek; ++i){
        scanf("%ld",ciag+i);
    }
    long liczba_zapytan;
    scanf ("%ld",&liczba_zapytan);
    long zapytania[liczba_zapytan];
    for(long i=0; i<liczba_zapytan; ++i){
        scanf("%ld",zapytania+i);
    }
    for(long i=0; i<liczba_zapytan; ++i){
        liczba_szukana = zapytania[i];
        indeks_pierwszej_szukanej = szukaj_pierwszej(0, liczba_czastek-1, liczba_szukana, ciag);
        if(indeks_pierwszej_szukanej==-1){
            printf("0\n");
        }
        else{
            indeks_drugiej_szukanej = szukaj_ostatniej(0, liczba_czastek-1, liczba_szukana, ciag);
            ilosc_wystapien = (indeks_drugiej_szukanej-indeks_pierwszej_szukanej)+1;
           printf("%ld\n",ilosc_wystapien);
        }
    }
    return 0;
}