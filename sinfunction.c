/* SIN FUNCTION */
#include<stdio.h>
#include<math.h>

main()
{
	int i;
	float value=0,x = 0,y;
	for(i=0;i<=18;i++)
	{
		x = (3.14/180)*value;
		y = sin(x);
		printf("%f     %5.2f\n",value,y);
		value+=15;
	}
	
}
