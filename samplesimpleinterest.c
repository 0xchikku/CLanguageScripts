/* TO CALCULATE SIMPLE INTEREST*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int years=0,period; 
	float rate, principal, amount, value;
	printf("Enter the principal :");
	scanf("%f",&principal);
	amount=principal;
	printf("Enter the years :");
	scanf("%d",&period);
	printf("Enter the rate :");
	scanf("%f",&rate);
	
	while(years<period)
	{
		value=amount+rate*amount;
		years+=1;
		amount=value;
		printf("%d        %5.2f\n",years,amount);
	}
}
