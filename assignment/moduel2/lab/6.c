#include<stdio.h>
int main()
{
	int i;
	printf("for loop");
	for(i=1;i<=10;i++)
	{
		printf("\n%d",i);
	}
	printf("\nwhile loop");
	i=1;
	while(i<=10)
	{
		printf("\n%d",i);
		i++;
	}
	printf("\ndo while loop");
	i=1;
	do{
		printf("\n%d",i);
			i++;
	}
	while(i<=10);

	return 0;
}
