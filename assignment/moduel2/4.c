#include<stdio.h>
int main()
{
	int Num1,Num2;
	printf("enter the value of Num1=");
	scanf("%d",&Num1);
	printf("\nenter the value of Num2=");
	scanf("%d",&Num2);
	//arithmatic operation
	printf("\narithmatic operator");
	printf("\nAddition of %d and %d is=%d.",Num1,Num2,Num1+Num2);
	printf("\nSubstraction of %d and %d is=%d.",Num1,Num2,Num1-Num2);
	printf("\nMultiplication of %d and %d is=%d.",Num1,Num2,Num1*Num2);
	printf("\nDivison of %d and %d is=%.2f.",Num1,Num2,(float)Num1/Num2);
	printf("\nremainder of %d and %d is=%d",Num1,Num2,Num1%Num2);
	//relational operations
	printf("\nrelational operator");
	printf("\n%d equal to %d is %d",Num1,Num2,Num1==Num2);
	printf("\n%d not Equal to %d is %d",Num1,Num2,Num1!=Num2);
	printf("\n%d less than %d is %d",Num1,Num2,Num1<Num2);
	printf("\n%d less than equal to %d is %d",Num1,Num2,Num1<=Num2);
	printf("\n%d greater than equal to %d is %d",Num1,Num2,Num1>Num2);
	printf("\n%d greater than equal to %d is %d",Num1,Num2,Num1>=Num2);
	//Logical operator
	printf("\nlogical operator");
	printf("\n%d AND %d is %d",Num1,Num2,Num1&&Num2);
	printf("\n%d OR %d is %d",Num1,Num2,Num1||Num2);
	printf("\n%d Not is %d",Num1,!Num1);
	printf("\n%d Not is %d",Num2,!Num2);
	return 0;
}
