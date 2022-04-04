#include <iostream>
using namespace std;

int main()
{
    char tab1[]="zainicjowana",tab2[]="tablica",tab3[]="znakowa",scalone[27];
    for (int i=0; i<12; i++)
    {
        scalone[i]=tab1[i];
    }
    for (int i=0; i<7; i++)
    {
        scalone[i+12]=tab2[i];
    }
    for (int i=0; i<7; i++)
    {
        scalone[i+19]=tab3[i];
    }
    scalone[26] = '\0';
    cout << scalone<<endl;
    for (int i=0; i<26; i++)
    {
        cout << scalone[i];
    }
    return 0;
}
