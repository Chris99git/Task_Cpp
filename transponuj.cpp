#include <iostream>
using namespace std;
int main() {
    int dane[ 9 ] = { 1, 1, 1, 2, 2, 2, 3, 3, 3 }; //tablica 3x3
    // wyœwietl zwyk³¹
    for( int wiersze = 0; wiersze < 3; wiersze++ ) {
        for( int kolumny = 0; kolumny < 3; kolumny++ ) {
            int index = wiersze * 3 + kolumny;
            cout << dane[ index ] << " ";
        }
        cout << endl;
    }
    //wyœwietl transponowan¹
    cout << endl;

    for( int wiersze = 0; wiersze < 3; wiersze++ ) {
        for( int kolumny = 0; kolumny < 3; kolumny++ ) {
            int index = wiersze + kolumny * 3;
            cout << dane[ index ] << " ";
        }
        cout << endl;
    }

}
