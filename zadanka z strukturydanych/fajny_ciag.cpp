#include<iostream>
#include<cstdlib>
using namespace std;

float fib(float n)
{
	if(n<3)
		return 1;

	return fib(n-1)+fib(n-2);
}
int main()
{
	float n;
	cin>>n;
	cout<<(3*fib(n))/n<<endl;
	return 0;
}
