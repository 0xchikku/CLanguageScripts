/* PROGRAM TO FIND ODD N EVEN USING TERNARY OPERATOR */
#include<stdio.h>

void main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	(num%2==0)?printf("%d is even",num):printf("%d is odd",num);
	getch();
	
}
