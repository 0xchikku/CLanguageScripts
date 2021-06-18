#include<stdio.h>

void main()
{
	char answer;
	printf("Enter yes/no(y/n) : ");
	answer = getchar();
	if(answer=='y' || answer=='Y')
	{
		printf("Hi!! Pranali..");
	}
	else
	{
		printf("Bye! Pranali..");
	}
}
