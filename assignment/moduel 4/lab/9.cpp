#include<iostream>
using namespace std;
int main()
{
	int target=76,number;
	
	cout<<"Guess the Random Number Between 1 to 100:\n";
		start:
	cout<<"\nEnter the Number=";
	cin>>number;

	while(number!=target)
	{
		if(number>target)
		{
			cout<<"The number is too high\n";
			goto start;
		}
		else
		{
			cout<<"The number is too low\n";
			goto start;
		}
	}
	cout<<"\nCONGRATULATION! You guessed the number";
	return 0;
}
