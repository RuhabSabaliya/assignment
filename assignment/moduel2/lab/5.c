#include<stdio.h>
int main()

{
	int Num,Month;
	
	printf(" Enter any number=");
	scanf("%d",&Num);
	if(Num%2==0)
	{
		printf("%d is even Number",Num);
	}
	else
	{
		printf("%d is odd Number",Num);
	}
	printf("\n Enter the month number from (1-12):");
	scanf("%d",&Month);
	switch(Month)
	{
		case 1:
			printf("\n %dst month is january",Month);
		break;
		
		case 2:
			printf("\n %dnd month is February",Month);
			break;
			
		case 3:
			printf("\n %drd month is March",Month);
			break;
			
		case 4:
			printf("\n %dth month is April",Month);
			break;
			
		case 5:
			printf("\n %dth month is May",Month);
			break;
			
		case 6:
			printf("\n %dth month is June",Month);
			break;
			
		case 7:
			printf("\n %dth month is July",Month);
			break;
		case 8:
			printf("\n %dth month is August",Month);
			break;
		case 9:
			printf("\n %dth month is september",Month);
			break;
		case 10:
			printf("\n %dth month is october",Month);
			break;
		case 11:
			printf("\n %dth month is November",Month);
			break;
			case 12:
			printf("\n %dth month is December",Month);
		break;
			
		default:
			printf("%d is invalid Number. Enter the Number between (1-12)",Month);
	}
	return 0;
	
}
