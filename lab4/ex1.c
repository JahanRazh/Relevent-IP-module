#include<stdio.h>
int main()
{
	int angel1,angel2,angel3,totalangel;
	
	//printf("enter the angel1,angel2,angel3:");
	//scanf("%d %d %d",&angel1,&angel2,&angel3);
	//printf("enter the angel1:");
	printf("enter the angel1:");
	scanf("%d",&angel1);
	
	printf("enter the angel2:");
	scanf("%d",&angel2);
	
	printf("enter the angel3:");
	scanf("%d",&angel3);
	totalangel=angel1+angel2+angel3;
	
	
	if (totalangel==180)
	{
		printf("triangel can be formed");
	}else{
		printf("triangel can not be formed");
	}
	
	return 0;
	
}
