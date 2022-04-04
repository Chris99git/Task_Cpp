#include <iostream>
using namespace std ;

int main()
{
    int a;
    string grade;
    cin>>a;

    switch(a)
    {
        case 1:grade = "nst";break;
        case 2:grade = "dp";break;
        case 3:grade = "dst";break;
        case 4:grade = "db";break;
        case 5:grade = "bdb";break;
        case 6:grade = "cel";break;
        default: grade = "Nie ma takiej oceny";
    }
        cout<<grade;
  return 0;
}
