#include <iostream>
#include <cstdlib>
using namespace std;
const int LIMIT=200;
struct Stack
{
    char tab[LIMIT];
    int top;
};
void create(Stack &S)
{
    S.top=-1;
}
void push(Stack &S, int x)
{
    S.top++;
    S.tab[S.top]=x;
}
char top(Stack S)
{
    return S.tab[S.top];
}
void pop(Stack &S)
{
    S.top--;
}
int main()
{
    int n,dlugosc;
    char tablica [200];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>tablica;
        dlugosc=strlen(tablica);
        Stack s1;
        create(s1);
        for (int j=0,j<dlugosc,j++)
        {

        }
    }
}
