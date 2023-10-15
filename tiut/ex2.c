#include<stdio.h>

int main()
{
	int d1,d2,d3,d4;
	int num;
	
	printf("enter the five digit number:");
	scanf("%d",&num);
	d1=num/10000;
	num=num%10000;
	d2=num/1000;
	num=num%1000;
	d3=num/100;
	num=num%100;
	d4=num/10;
	num=num%10;
	
	printf("%d\t",d1);
	printf("%d\t",d2);
	printf("%d\t",d3);
	printf("%d\t",d4);
	printf("%d\t",num);
	
	return 0;	

}
