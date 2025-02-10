#include<stdio.h>
int main()
{
	FILE*fp1;
    fp1=fopen("first.text","w");
    fprintf(fp1,"This is My first text");
    fclose(fp1);
    fp1=fopen("first.text","r");
    char str[100];
    fgets(str,100,fp1);
    printf("%s",str);
	return 0;
}
