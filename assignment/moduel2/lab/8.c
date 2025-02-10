#include<stdio.h>
int factorial(int num);
int main()
{
	int num;
	printf("Enter the Number for Factorial=");
	scanf("%d",&num);
	int result= factorial(num);
	printf("The factorial of %d is= %d",num,result);
	
	return 0;
}
int factorial(int num)
{
	int i;
	int fact=1;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
}
