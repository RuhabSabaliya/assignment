#include<iostream>
using namespace std;
int main()
{
	int num1=10;//variable
	const double pi=3.14;//const
	cout<<"Value of num1="<<num1;
	cout<<"\nValue of Pi="<<pi;
	num1=20;//Value can be updated in variable
	cout<<"\nupdated Value of num1="<<num1;
	return 0;
}
