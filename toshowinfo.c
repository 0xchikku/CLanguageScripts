/* PROGRAM FOR MAILING ADDRESS */
#include<stdio.h>
#include<conio.h>

void main()
{
	char name[30],address[256];
	char area[35], pincode[6];
	printf("Enter your Name :");
	scanf("%s",name);
	printf("Enter your Address :");
	scanf("%s",address);
	printf("Enter your Area:");
	scanf("%s",area);
	printf("Enter Pincode:");
	scanf("%s",pincode);
	printf("\t\t*************************\n");
	printf("\tName : %s\n\tAddress : %s\n\tArea,Pincode : %s,%s\n",name,address,area,pincode);
	printf("\t\t*************************\n");
	getch();
}
