/* PROGRAM TO FIND ODD N EVEN NUMBERS */
#include<stdio.h>

void main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("The number %d is even",num);
	}
	else
	{
		printf("The number %d is odd",num);
	}
	getch();
}
