#include <stdio.h>
int main(void)
{
	float kms,miles;
	
	printf("Enter the distance in killometers:");
	scanf("%f",&kms);
	
	miles=kms/(8.0/5.0);
	printf("distance in miles:%.1f",miles);
	return 0;
}
