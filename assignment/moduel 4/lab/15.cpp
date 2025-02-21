#include<iostream>
using namespace std;
int main()
{
	int a[100],size,i,sum=0;
	cout<<"Enter the size of an array=";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"Enter the a["<<i<<"]=";
		cin>>a[i];
	}
	for(i=0;i<size;i++)
	{
		sum+=a[i];
	}
	cout<<"Sum of array is="<<sum;
	cout<<"\navg of array is="<<sum/size;
	return 0;
}
