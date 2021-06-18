/*  Program to multiple the two numbers using function  */
#include<stdio.h>

int multiple(int num1, int num2)
{
	int product;
	product=num1*num2;
	return(product);
}

main()
{
int num1,num2,multiplied;
printf("Enter the values of num1 and num2 : ");
scanf("%d %d",&num1,&num2);
multiplied = multiple(num1,num2);

printf("The product of %d and %d is %d",num1,num2,multiplied);

}


