#include <iostream>
using namespace std;
int main()
{
    double tab1[5]= {2.5,3.0,4.6,6.3,8.1};
    double tab2[5][5];
    for (int i=0; i<5; i++)
    {
        {
            for (int j=0; j<5; j++)
            {
                tab2[i][j]=tab1[i]*tab1[j];
            }
        }
        {
            for (int j=0; j<5; j++)
            {
                tab2[i][j]=tab1[i]*tab1[j];
            }
        }
    }

}
