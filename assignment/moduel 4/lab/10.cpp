#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"Enter the  Number:";
	cin>>num;
	for(i=1;i<=10;i++)
	{
		cout<<num<<"X"<<i<<"="<<num*i<<endl;
	}
	return 0;
}
