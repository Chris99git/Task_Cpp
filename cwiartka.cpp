#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;
int x, y;
int main()
{
 cin >> x >> y;
 if(x == 0 && y == 0) {
 cout << "0"<<endl;
 }
 else if(x > 0 && y > 0) {
 cout << "I"<<endl;
 }
 else if(x < 0 && y > 0) {
 cout << "II"<<endl;
 }
 else if(x < 0 && y < 0) {
 cout << "III"<<endl;
 }
 else if(x > 0 && y < 0) {
 cout << "IV"<<endl;
 }
 else if(x == 0 && y > 0 || y < 0)
 {
 cout << "OY"<<endl;
 }
 else if(y == 0 && x > 0 || x < 0)
 {
 cout << "XO"<<endl;
 }
 system("pause"); return 0;
}
