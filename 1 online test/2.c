#include <stdio.h>
int main(void)
{
	char type;
	float Amount,Discount; 
	
	printf("customer type:");
	scanf("%d",&type);
	
	printf("Bill Amount:");
	scanf("%f",&Amount);
	if (type==1)
	{
		if (Amount<=2000)
		{
			Discount=Amount*15/100.0;
			Amount=Amount-Discount;
			printf("Discount Amount:%.2f\n",Discount);
			printf("Final Bill Amount:%.2f\n",Amount);
		}
		else if(Amount>2000)
		{
			Discount=Amount*25/100.0;
			Amount=Amount-Discount;
			printf("Discount Amount:%.2f\n",Discount);
			printf("Final Bill Amount:%.2f\n",Amount);
		}
	}
	else if (type==2)
	{
		if (Amount>=3000)
		{
			Discount=Amount*15/100.0;
			Amount=Amount-Discount;
			printf("Discount Amount:%.2f\n",Discount);
			printf("Final Bill Amount:%.2f\n",Amount);
		}
		
	}	
	return 0;
}
