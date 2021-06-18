#include<stdio.h>
#include<ctype.h>
void main()
{
	char alphabet;
	printf("Enter any alphabet: ");
	putchar('\n');
	alphabet = getchar();
	if(isalpha(alphabet))
	{
		putchar(toupper(alphabet));
	}
	else
	{
		printf("Enter in lowercase");
	}
}
