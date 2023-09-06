#include<stdio.h>
int main()
{
	int Airoption;
	char classtype,extra;
	int noseats;
	float price,exprice,totprice;
	
	
	printf("Input Airline option:");
	scanf("%d",&Airoption);
	
	printf("Class type (E/B) :");
	scanf(" %c",&classtype);
	
	printf("Number of seats:");
	scanf("%d",&noseats);
	
	if (Airoption==1)
	{
		if (classtype=='E')
		{
			price=36500.00*noseats;
		}
		else if(classtype=='B')
		{
			price=77600.00*noseats;
		}	
	}
	else if (Airoption==2)
	{
		if (classtype=='E')
		{
			price=35800.00*noseats;
		}
		else if(classtype=='B')
		{
			price=76500.00*noseats;
		}	
	}
	else if (Airoption==3)
	{
		if (classtype=='E')
		{
			price=54600.00*noseats;
		}
		else if(classtype=='B')
		{
			price=84700.00*noseats;
		}	
	}
	else if (Airoption==4)
	{
		if (classtype=='E')
		{
			price=28500.00*noseats;
		}
		else if(classtype=='B')
		{
			price=42800.00*noseats;
		}	
	}
	
	int option;
	printf("Do you need any extra services(y/n):");
	scanf(" %c",&extra);
	
	while(extra)
	{
		if (extra=='y'||extra=='Y')
		{
			printf("input your option:");
			scanf("%d",&option);
				switch(option)
				{
				case 1:
					exprice=exprice+(7800.00*noseats);
					break;	
				case 2:
					exprice=exprice+(1500.00*noseats);
					break;		
				case 3:
					exprice=exprice+(19500.00*noseats);
					break;	
				case 4:
					exprice=exprice+(2000.00*noseats);
					break;	
				default:
					printf("invalid entered option");		
					continue;
				}	
		}	
	
		else if(extra=='N'||extra=='n')
			{
			totprice=price+exprice;
			printf("Total Price:%.2f",totprice);
			break;
			}
	printf("Do you need any extra services(y/n):");
	scanf(" %c",&extra);	
	}
return 0;	
}
