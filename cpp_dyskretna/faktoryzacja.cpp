#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int lp,liczba,dzielnik,dodawanie;
    scanf("%d",&lp);
    for(int i=0; i<lp; i++)
    {
        dzielnik=2;
        dodawanie=1;
        scanf("%d",&liczba);
        if(liczba==1)
        {
            printf("1\n");
        }
        else
        {
            while(liczba>1)
            {
                if((liczba%dzielnik)==0)
                {
                    liczba/=dzielnik;
                    if(liczba==1)
                    {
                        printf("%d\n",dzielnik);
                    }
                    else
                    {
                        printf("%d*",dzielnik);
                    }
                }
                else if(dzielnik>=sqrt(liczba))
                {
                    printf("%d\n",liczba);
                    break;
                }
                else
                {
                    dzielnik+=dodawanie;
                }
                dodawanie=2;
            }
        }
    }
    return 0;
}
