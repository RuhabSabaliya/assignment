#include<iostream>
using namespace std;
int main()
{
	int t,i,sum=0;;
	int m[100];
	cout<<"Enter the Total Subject=";
	cin>>t;
	for(i=0;i<t;i++)
	{
		cout<<"Marks of subject"<<i+1<<"=";
		cin>>m[i];
	}
	for(i=0;i<t;i++)
	{
		sum=sum+m[i];
	}
	int avg=(double)sum/t;
	cout<<"your average is="<<avg;
	
	if(avg>=90)
	{
		cout<<"\nYour grade is= A";
	}
	else if(avg>=75)
	{
		cout<<"\nYour grade is= B";
	}
	else if(avg>=60)
	{
		cout<<"\nYour grade is= C";
	}
	else if(avg>=40)
	{
		cout<<"\nYour grade is= D";
	}
	else
	{
		cout<<"\nYour grade is= F";
	}
	return 0;
}
