#include<stdio.h>

void main()
{
	int numint=1;
	float numfloat=1;
	char charch='c';
	char charstr[20]="str";
	int num=sizeof(numint);
	float numf=sizeof(numfloat);
	char alpha=sizeof(charch);
	char alphastr=sizeof(charstr);
	printf("%d,%f,%c,%s",numint,numfloat,charch,charstr);
	printf("%d,%f,%c,%s",num,numf,alpha,alphastr);
	printf("%d",sizeof(numint));
	getch();
}
