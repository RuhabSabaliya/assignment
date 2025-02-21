#include<iostream>
using namespace std;
int main()
{
	char c='r';
	int a=c;
	double d=10.25;
	int b= (int)d;
	cout<<"\nimplicit conversion:\n";
	cout<<"\nvalue of char="<<c;
	cout<<"\nvalue of int="<<a<<endl;
	
	cout<<"\nExplicit conversion:\n";
	cout<<"\nvalue of double="<<d;
	cout<<"\nvalue of int="<<b;
	return 0;
}
