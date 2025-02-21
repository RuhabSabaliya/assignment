#include<iostream>
using namespace std;
int factorial(double num)
{
	if(num!=0)
	{
		return num*factorial(num-1);
	}
	else
	{
		return 1;
	}
	
}
int main()
{
	double num;
	cout<<"Enter the number=";
	cin>>num;
	double ans=factorial(num);
	cout<<"Factorial of "<<num<<" is="<<ans;
	return 0;
}
