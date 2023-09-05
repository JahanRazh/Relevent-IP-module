#include <stdio.h>
int main(void)
{
	int new;
	
	printf("Enter the number of customers introduced :");
	scanf("%d", &new);
	printf("Your Prices Are -  :");
	if(new>=1){
		printf("Wirst Watch,");
	}
	if(new>=3){
		printf("Umbrella,");
	}
	if(new>=5){
		printf("Bag ,");
	}
	if(new>=10){
		printf("Min TV, ");
	}
	if(new>15){
		printf("DVD ");
	}
	return 0;
}
