#include<stdio.h>
#include<conio.h>
#include<string.h>
struct org
{
	char name[30];
	char dept[30];
	int salary;
};
main()
{
	struct org employee[20];
	int n,i;
	printf("Enter the number of employees:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter employee %d name:",i);
		scanf("%s",&employee[i].name);
		printf("\n employee department:");
		scanf("%s",&employee[i].dept);
		printf("\n employee salary:");
		scanf("%d",&employee[i].salary);
	}
	printf("\nEmployees information:");
		for(i=1;i<=n;i++)
	{
		printf(" \n%d.employee name:",i);
		printf("\t employee department:");
		printf("\t employee salary:");
		printf("\n%s",employee[i].name);
		printf("\t%s",employee[i].dept);
		printf("\t%d",employee[i].salary);
    }
}
