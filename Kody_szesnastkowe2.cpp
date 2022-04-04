#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int main()
{
    long long int output[10];
    string input;
    int base=1;
    cin >> input;
    char p[input.length()];
        for (int i=(sizeof(p)/sizeof(p[0]))-1; i>=0; i--){
            switch(p[i]){
                case '1':
                output[i] = 1;
                break;
                case '2':
                output[i] = 2;
                break;
                case '3':
                output[i] = 3;
                break;
                case '4':
                output[i] = 4;
                break;
                case '5':
                output[i] = 5;
                break;
                case '6':
                output[i] = 6;
                break;
                case '7':
                output[i] = 7;
                break;
                case '8':
                output[i] = 8;
                break;
                case '9':
                output[i] = 9;
                break;
                case 'A':
                output[i] = 10;
                break;
                case 'B':
                output[i] = 11;
                break;
                case 'C':
                output[i] = 12;
                break;
                case 'D':
                output[i] = 13;
                break;
                case 'E':
                output[i] = 14;
                break;
                case 'F':
                output[i] = 15;
                break;
            }
            output[i]*=base;
            base*=16;
        }
        int decimalValue = 0;
     for (int i=0; i<(sizeof(output)/sizeof(output[0])); i++){
          decimalValue+=output[i];
          cout << output[i]<< " ";
        }
         cout << decimalValue << " " << char(decimalValue) << " ";

    return 0;
}
