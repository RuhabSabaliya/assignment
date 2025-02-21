#include<iostream>
using namespace std;
class calculator
{
	sum(int n1,int n2)
{
	cout<<"addition of "<< n1 <<" and "<< n2 <<" is="<<n1+n2;
}
void sub(int n1,int n2)
{
	cout<<"Substraction of "<< n1 <<" and "<< n2 <<" is="<<n1-n2;
}
void mul(int n1,int n2)
{
	cout<<"Multiplication of "<< n1 <<" and "<< n2 <<" is="<<n1*n2;
}
void div(int n1,int n2)
{
	cout<<"Divison of "<< n1 <<" and "<< n2 <<" is="<<(double)n1/n2;
}
void rem(int n1,int n2)
{
	cout<<"Moduelo of "<< n1 <<" and "<< n2 <<" is="<<n1%n2;
}
};

int main()
{
	int num1,num2,choice;
	cout<<"Enter the Num1=";
	cin>>num1;
	cout<<"Enter the Num2=";
	cin>>num2;
	cout<<"\npress 1 for addition";
	cout<<"\npress 2 for substraction";
	cout<<"\npress 3 for Multiplication";
	cout<<"\npress 4 for Divison";
	cout<<"\npress 5 for Moduelo";
	cout<<"\nEnter your choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				sum(num1,num2);
			break;
			}
		case 2:
			{
				sub(num1,num2);
			break;
			}
			case 3:
			{
				mul(num1,num2);
			break;
			}
			case 4:
			{
				div(num1,num2);
			break;
			}
			case 5:
			{
				rem(num1,num2);
			break;
			}
	}
	return 0;
}
