#include <iostream>
using namespace std;
int fr(int n)
{
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}
int check(int n){
    int done = false;
    int counter =2;
    while(counter < n){
        if(n%counter == 0) done = true;
        counter++;
    }
    return !done;
}
int check_2(int n){
    int done = false;
    int counter =0;
    while(counter < n){
        if(counter*counter == n) return true;
        if(counter*counter > n) return false;
        counter++;
    }
}
int check_3(int n){
    int done = false;
    int counter =0;
    while(counter < n){
        if(counter*counter*counter == n) return true;
        if(counter*counter*counter > n) return false;
        counter++;
    }
}
int main()
{
    int a;
cout << "Program sprawdza czy podana liczba jest szescianem innej liczby"<<endl;
cout << "Podaj liczbe: ";
cin >> a;

cout << "Liczba ma " << fr(a) << " cyfr";
cout << endl;

if(check(a)) cout <<"Podana liczba jest liczba pierwsza";
else cout << "Podana liczba nie jest pierwsza";
cout << endl;
if(check_2(a)) cout <<"Podana liczba jest kwadratem liczby calkowitej";
else cout << "Podana liczba nie jest kwadratem liczby calkowitej";
cout << endl;
if(check_3(a)) cout <<"Podana liczba jest szescianem liczby calkowitej";
else cout << "Podana liczba nie jest szescianem liczby calkowitej";
}
