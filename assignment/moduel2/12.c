#include<stdio.h>
struct student
	{
		char name[100];
		int rollnumber,marks;
	};
int main()
{
	int i;
struct student s[3]={{"ruhab",1,78},{"prince",2,87},{"saif",3,64}};
for(i=0;i<3;i++)
{
	printf("Studentname=%s\n",s[i].name);
	printf("Studentrollnumber=%d\n",s[i].rollnumber);
	printf("Studentmarks=%d\n",s[i].marks);
}
return 0;
}
