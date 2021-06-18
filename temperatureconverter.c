/* PROGRAM TO CONVERT CELCIUS TO FAHREHEIT AND VISE VERSA */
#include<stdio.h>

main()
{
	char unit[5],lowerunit[5];
	float celcius,fahreheit;
	printf("Enter :\nF for Celsius to Fahrenheit \nC for Fahrenheit to Celsius\n ");
	scanf("%s",unit);
	printf("%s",unit);
	lowerunit= strlwr(unit);
	printf("%s",lowerunit);
	getch();
}
