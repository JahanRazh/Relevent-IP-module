#include<stdio.h>
int main()
{
	int option,number;
	char size;
	float totprice=0.00;
	char topping;
	int topoption;
	float price=0.00,fullamount=0.00;

	
	printf("Input Pizza Option:");
	scanf("%d",&option);
	if (option<=3&&option>0)
	{
	
		printf("Size of the Pizza(P/M/L):");
		scanf(" %c",&size);
	
		printf("Number of pizza:");
		scanf("%d",&number);
		float totprice;
		switch(option)
		{
			case 1:
				
				if (size=='P'||size=='p')
				{
					totprice=560.00*number;
					break;	
				}
				else if (size=='M'||size=='m')
				{
					totprice=920.00*number;
					break;
				}
				else if (size=='L'||size=='l')
				{
					totprice=1800.00*number;
					printf("%.2f",totprice);
					break;
				}	
			
			case 2:
				
				if (size=='P'||size=='p')
				{
					totprice=340.00*number;
					break;	
				}
				else if (size=='M'||size=='m')
				{
					totprice=660.00*number;
					break;
				}
				else if (size=='L'||size=='l')
				{
					totprice=1300.00*number;
					break;
				}
				
			case 3:
				
				if (size=='P'||size=='p')
				{
					totprice=760.00*number;
					break;	
				}
				else if (size=='M'||size=='m')
				{
					totprice=1100.00*number;
					break;
				}
				else if (size=='L'||size=='l')
				{
					totprice=2100.00*number;
					break;
				}
				
			default:
				{
				printf("Entered an invalide option:");
				}
		}
 	
		printf("Do you need to extra topping(y/n):");
		scanf(" %c",&topping);
		
		while (topping)
		{	
		
			if (topping=='y'||topping=='Y')
			{
				
				printf("Input your option:");
				scanf("%d",&topoption);
				switch(topoption)
				{
					case 1:
						{
							price=price+(320.00*number);
							totprice=+price;
							break;	
						}
					
					case 2:
						{
							price=price+(140.00*number);
							totprice=+price;
							break;
						}
			
					case 3:
						{
							price=price+(130.00*number);
							totprice=+price;
							break;
						}
					case 4:
						{
							price=price+(150.00*number);
							totprice=+price;
							break;
						}
					default:
						{
							printf("Entered an invalid option:");
							break;
						}			
			
				}
				
				
			
			}
			else if(topping=='n'||topping=='N')
				{
					break;			
				}
			printf("Do you need to extra topping(y/n):");
			scanf(" %c",&topping);
		
		}
		fullamount=totprice+price;
		printf("Total price:%.2f",fullamount);
		
	}
	else
		printf("Entered an invalid option:");
		
	return 0;
}
