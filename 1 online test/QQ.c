#include<stdio.h>
int main(void)
{
	int no_member;
	
	
	printf("enter number of customers introduced:");
	scanf("%d",&no_member);
	
	if (no_member>=1&&no_member<3)
	{
		printf("your prize is wrist watch");
	}
	else if(no_member>=3&&no_member<5)
	{
		printf("your prize are wrist watch,umbrella");
	}
	else if(no_member>=5&&no_member<10)
	{
		printf("your prize are wrist watch,umbrella,Bag");
	}
	else if(no_member>=10&&no_member<15)
	{
		printf("your prize are wrist watch,umbrella,Bag,Mini Tv Set");
	}
	else if(no_member>=15)
	{
		printf("your prize are wrist watch,umbrella,Bag,Mini Tv Set,DVD Player");
	}
	return 0;
	
}
