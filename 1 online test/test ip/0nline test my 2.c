#include<stdio.h>
int main(void)
{
	int mile,add_mile;
	float totalprice;
	
	printf("enter the number of miles:");
	scanf("%d", &mile);
	
	if ( mile <= 100)
	{
		totalprice=totalprice+(0.25/mile);
		printf("Total price =%f",totalprice);
	}
	if ( mile > 100)
	{
		add_mile=mile-100;
		totalprice=totalprice+(0.15 /add_mile);
		printf("Total price =%f",totalprice);
		
	}
	return 0;
}
