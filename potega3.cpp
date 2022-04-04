#include <iostream>

using namespace std;
float potega(float a,int b){
    float tmp=1;
    if(b==0) return 1;
        if(b>0){
            while (b--){
            tmp*=a;
        }
        return tmp;
        }
    else{
        while(b++){
             tmp*=a;
        }
        return 1/tmp;
    }
}
int main()
{
    int a,b;
    cout << "Program oblicza potege liczby"<<endl;
    cout << "Podaj podstawe: ";
    cin >> a;
    cout << endl;
    cout << "Podaj wykladnik: ";
    cin >> b;
    cout << endl;
    cout << potega(a,b);

}
