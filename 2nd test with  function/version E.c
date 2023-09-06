#include<stdio.h>
float findRadianValue(float angleInDegrees);
void printRadianValues(void);
float pi=22/7;
float degrees,radian;
int main(void)
{	
	
	findRadianValue(degrees);
	printRadianValues();
	
	return 0;
}

float findRadianValue(float angleInDegrees)
{
	radian = pi/180*degrees;
	return radian;
}
void printRadianValues(void)
{
	 
	printf("Angle(degrees)\tAngle(radians)\n");
	for ( degrees = 100; degrees <= 200; degrees += 20 )
	{
		printf("%.2f\t\t%.2f\n",degrees,findRadianValue(degrees));
	}
}
