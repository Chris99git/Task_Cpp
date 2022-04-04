#include <iostream>
using namespace std;

int main()
{
    char pesel[11];
    int tab[11]= {1,3,7,9,1,3,7,9,1,3,1};
    int ile,iloczyn;
    int suma=0;

    cin>>ile;
    for(int i=0; i<ile; i++)
    {
        cin>>pesel;
        for(int j=0; j<11; j++)
        {
            iloczyn=(pesel[j]-'0')*tab[j];
            suma+=iloczyn;
        }

        if (suma>0 && suma%10==0)
            cout<<"D"<<endl;
        else
            cout<<"N"<<endl;

        suma=0;
    }
}
