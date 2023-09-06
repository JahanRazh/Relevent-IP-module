#include <stdio.h>
int main()
{
	int type;
	float amount,dis,finalam;
	
	printf("customer type:");
	scanf("%d",&type);
	
	printf("Bill amount:");
	scanf("%.2f",&amount);
	
	switch(type)
	{
		case 1:
			if(amount<2000)
			{
				dis=(15/100*amount);
				finalam=dis+amount;
				printf("Discount amount:%.2f\n",dis);
				printf("Final bill amount:%.2f\n",finalam);
			}
			else
			{
				dis=(25/100*amount);
				finalam=dis+amount;
				printf("Discount amount:%.2f\n",dis);
				printf("Final bill amount:%.2f\n",finalam);
				break;	
			}
		
		
		case 2:
			if(amount>3000)
			{
				dis=(15/100*amount);
				finalam=dis+amount;
				printf("%.2f",finalam);
				break;
			}
		
		default:
			printf("Error");
	}
	
	return 0;
}
