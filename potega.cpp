#include <iostream>
using namespace std;
int main(){
    string parzystosc;
    for (int i=1; i<=15; i++)
    {
        cout<<i<<"\t"<<i*i<<"\t"<<i*i*i;
//        if(i%2==0){
//            cout<<"\t PARZYSTE";
//        }
//        cout<<endl;
    cout<< (i%2==0?"\t PARZYSZTE":"")<<endl;
    }
    return(0);
}
