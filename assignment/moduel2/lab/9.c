#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5},b[3][3]=
	{1,2,3,
	 4,5,6,
     7,8,9},i,j;
     printf("\nOne dimensional array=\n");
     for(i=0;i<5;i++)
     {
     printf("%d ",a[i]);	
	 }
	 int sum1=0;//for one dimensional array
	 for(i=0;i<5;i++)
	 {
	   sum1=sum1+a[i];	
	 }
	 printf("\nThe sum of one dimensional array is=%d",sum1);
	 int sum2=0;//for two dimensional array
	 printf("\ntwo dimensional array=\n");
	 for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{
	 		printf("%d ",b[i][j]);
		 }
		 printf("\n");
	 }
	 for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{
	 	sum2=sum2+b[i][j];
		 }
	 }
	printf("\nThe sum of two dimensional array is=%d",sum2);
	return 0;
}
