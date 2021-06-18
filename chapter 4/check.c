#include<stdio.h>
#include<ctype.h>
void main()
{
	char character;
	printf("Enter any key : ");
	character = getchar();
	if(isalpha(character)>0)
	{
		printf("It is an alphabet.");
	}
	else if(isdigit(character)>0)
	{
		printf("It is digit");
	}
 	else
 	{
 		printf("It is not an alphanumeric.");
	 }
}
