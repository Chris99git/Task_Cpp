#include <iostream>
using namespace std;
double celsius_to_fahrenheit (double);
int main()
{
double stopnie ;
    cout << "Podaj temperature w stopniach celsjusza: " ;
    cin>> stopnie;
    double fahrenheit = celsius_to_fahrenheit (stopnie);
    cout<<stopnie<<" stopnie Celsjusza to "<<fahrenheit<<" stopni Farhrenheita";
    return 0;
}
double celsius_to_fahrenheit (double sts)
{
return 1.8*sts+32;
}

