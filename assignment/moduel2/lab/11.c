#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	printf("enter the str1=");
	gets(str1);
	printf("enter the str2=");
	gets(str2);
	printf("\norignal value of str1=%s",str1);
	printf("\norignal value of str2=%s",str2);
	strcat(str1,str2);
	printf("\nmerged string=%s",str1);
    int length=	strlen(str1);
    printf("\nlength of merged string=%d",length);
	
	return 0;
}
