/* PROGRAM TO FIND GREATEST AMONG THREE */
#include<stdio.h>

void main()
{
	int num1,num2,num3;
	printf("Enter no.1 :");
	scanf("%d",&num1);
	printf("Enter no.2 :");
	scanf("%d",&num2);
	printf("Enter no.3 :");
	scanf("%d",&num3);
	if(num1>num2 && num1>num3)
	{
		printf("%d is greater among three",num1);
	}
	else if(num2>num1 && num2>num3)
	{
		printf("%d is greater among three",num2);
	}
	else
	{
		printf("%d is greater among three",num3);
	}
	getch();
}
