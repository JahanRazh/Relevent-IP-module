#include<stdio.h>
#include<assert.h>
float caldiscount(int time,float totAmont);
void displayGift(float finalTot);
float discount,amount,finaltot;
int time;
int main()
{
	
	
	printf("Enter the Time:");
	scanf("%d",&time);
	
	printf("Enter the amount:");
	scanf("%f",&amount);
		
	discount=caldiscount(time,amount);
	finaltot=amount-discount;
	displayGift(finaltot);
	
	
	return 0;	
}
float caldiscount(int time,float totAmount)
{
	if ((16<=time<=19)&&(totAmount>=5000))
	{
		return totAmount*10/100.0;			
	}
	else if((16<=time>=19)&&(2500<=totAmount<5000))
	{
		return totAmount*7/100.0;
	}
	else if ((20<=time<=22)&&(totAmount>=5000))
	{
		return totAmount*12/100.0;	
	}
	else if((20<=time<=22)&&(2500<=totAmount<5000))
	{
		return totAmount*9/100.0;	
	}
	else
	{
		printf("Entered invalid time");
		return 0;
	}
}
void displayGift(float finalTot)
{	printf("Final amount (after discount):%f\n",finalTot);
	if (finalTot>=7000)
	{
		printf("packet of milk:");
	}
	else if(finaltot<=6999&&finalTot>=5000)
	{
		printf("1kg of sugar");
	}
	else if(finaltot>=3000&&finalTot<=4999)
	{
		printf("packt of 6 Eggs");
	}
}
