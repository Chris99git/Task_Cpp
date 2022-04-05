#include <iostream>
#include <cstdlib>
#include<algorithm>
using namespace std;

const int m = 1000;
bool U[m]; //slownik

void Insert(unsigned int v)
{
	U[v] = true;
}
bool Search(unsigned int v)
{
	return U[v];
//	if (U[v] == true)
//		return true;
//	else
//		return false;
}
void Delete(unsigned int v)
{
	U[v] = false;
}
int main()
{
	Insert(5);
	Insert(12);
	cout << endl << Search(12);
	cout << endl << Search(20);
	Delete(5);
	cout << endl << Search(5);
}
