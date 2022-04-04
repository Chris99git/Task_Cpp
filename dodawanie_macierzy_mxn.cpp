#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin>> a>>b;
    int A[a][b], B[a][b], W[a][b];
    if(a,b <=10)
    {
        //wczytanie pierwszej macierzy
        for(int i=0; i<a; i++)   //petla od wierszy
            for(int j=0; j<b; j++) //pêtla od ilsci liczb w wierszu
                cin>>A[i][j];    //wczytanie elementów pierwszej macierzy

        //wczytanie drugiej macierzy
        for(int i=0; i<a; i++)
            for(int j=0; j<b; j++)
            {
                cin>>B[i][j];
                W[i][j] = A[i][j] + B[i][j]; //dodawanie
            }
        //wynik
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<b; j++)
                cout<<W[i][j]<<" ";
            cout<<endl;
        }
        return 0;
    }
    else
    {
        cout<< "nieobslugiwany zakres"<<endl;
    }
}
