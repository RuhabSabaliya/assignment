#include<iostream>
using namespace std;
int g=10;//global variable
void print(int l)
{
	cout<<"local variable="<<l;
	cout<<"\nglobal variable="<<g;
}
int main()
{
	int l=20;//local variable
	print(l);
	return 0;
}

