/* To calculate the interest */
#include<stdio.h>
#include<conio.h>
/* #define is preprocessor compiler directive */


main()
{
int principal,period;
int year;
float amount, interestRate, value;
printf("Enter the value for principal and period :");
scanf("%d %d",&principal,&period);
year = 0;
interestRate = 0.11;
amount = principal;

while(year<=period)
{
	printf("%2d   %5.2f\n",year,value);
	value = amount + interestRate * amount;
	year +=1;
	amount = value;
}
getch();
}
