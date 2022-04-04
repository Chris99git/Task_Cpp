#include <iostream>
using namespace std;
int main(){
    int n,d;
    cin>>n;
    d=2;
    while(n>1)
        {
       if (n%d==0){
        cout<<d<<" ";
       n=n/d;
    }
    else
        {
        d++;
        }
}
}

