/* In programs which uses printf & scanf header file is not necessary*/
#include<stdio.h>
#include<conio.h>
/*
main indicates the compiler to start from here. 
main function can be allowed to declared in this ways
main()
int main()
void main()
main(void)
int main(void)
void main(void)
*/
int main()
{
	/* Declaration of variables with their type*/
	
	float amount;
	
	
	int number=100;
	
	amount=35.99+64.01;
	printf("%d \n%f \n",number,amount);
	printf("%5.3f",amount);
	getch();	
	return 0;
}
