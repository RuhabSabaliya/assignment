#include<iostream>
using namespace std;
int sum(int num1,int num2)
{
	return num1+num2;
}
int main()
{
    int n1,n2;
    cout<<"Enter a number: ";
    cin>>n1;
    cout<<"Enter a number: ";
    cin>>n2;
    int ans = sum(n1,n2);
    cout<<"Sum="<<ans;
    return 0;
}
