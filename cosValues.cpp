#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
#define MAXANGLE 180

main()
{
	int angle;
	float ofx,valueof;
	
	angle=0;
	
	printf("Angle        Cos(Angle)\n");
	while(angle<=MAXANGLE)
	{
		ofx = (PI/MAXANGLE)*angle;
		valueof = cos(ofx);
		printf("%d        %3.3f\n",angle,valueof);
		angle +=10;
	}
	
}
