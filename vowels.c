/* PROGRAM TO FIND VOWEL N CONSONENTS */
#include<stdio.h>

void main()
{
	char letter;
	int lowercase,uppercase;
	printf("Enter any alphabet :");
	scanf("%c",&letter);
	lowercase=(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u');
	uppercase=(letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U');
	if(lowercase||uppercase)
	{
		printf("%c is vowel",letter);
	}
	else
	{
		printf("%c is consonents",letter);
	}
	getch();
}
