/*SIMPLE ARITHMETIC CALCULATOR */
#include<stdio.h>
#include<conio.h>
#include<math.h>

add(int num1,int num2)
{
	int sum;
	sum = num1+num2;
	return(sum);
}

minus(int num1,int num2)
{
	int difference;
	difference = num1-num2;
	return(difference);
}

multiple(int num1,int num2)
{
	int product;
	product = num1*num2;
	return(product);
}

divide(int num1, int num2)
{
	float division;
	division = num1/num2;
	return(division);
}

void main()
{
	int num1,num2,sum,difference,product;
	float division;
	printf("Enter num1 :");
	scanf("%d",&num1);
	printf("Enter num2 :");
	scanf("%d",&num2);
	printf("num1 = %d and num2 = %d\n",num1,num2);
	sum = add(num1,num2);
	difference = minus(num1,num2);
	product = multiple(num1,num2);
	division = divide(num1,num2);
	printf("__________________________________________\n");
	printf("sum = %d\t\tdifference = %d   \nproduct = %d\t\tdivision = %5.2f  \n",sum,difference,product,division);
	printf("__________________________________________\n");
	getch();
}

