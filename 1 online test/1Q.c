#include<stdio.h>
int main()
{
	float pi=22/7.0;
	float radius,height,volume;
	
	printf("Enter the radius:");
	scanf( "%f", &radius);
	
	printf("Enter the height:");
	scanf( "%f",&height);
	
	volume=1/3.0*pi*radius*radius*height;
	printf("%.3f",volume);
	
	
	return 0;	
}
