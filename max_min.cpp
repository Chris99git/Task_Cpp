#include <iostream>
#include <cstdlib>
using namespace std;
int a,b,c,m,n;
int main() {
    cout << "Podaj 3 liczby rozdzielone spacja: ";
    cin>>a>>b>>c;

   m=a;
   if (b>m) m=b;
   if (c>m) m=c;
   n=a;
   if (b<n) n=b;
   if (c<n) n=c;
    cout<<"Najwieksza liczba to "<<m<< endl;
    cout<<"Najmniejsza liczba to "<<n<< endl;

    system("pause"); return 0;
}
