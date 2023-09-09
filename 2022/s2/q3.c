#include<stdio.h>
#include<assert.h>
float calcRemainingFuel (int vehicleType, float usedFuelQuota);
float calcFuelcost (int vehicleType, float usedFuelQuota);
void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost);
int remainingfuelquota,allowedfuelquota;
void testcalcRemainingFuel();
float fuelcost;
float price;

int main(void)
{
	int type;
	float usedquota;
	
	
	printf("Enter the vehical type:");
	scanf("%d",&type);
	printf("Enter the used fuel cost:");
	scanf("%f",&usedquota);
	
	remainingfuelquota = calcRemainingFuel(type,usedquota);
	fuelcost=calcFuelcost(type,usedquota);
	
	displayDetails(type,usedquota,remainingfuelquota,fuelcost);
	
	testcalcRemainingFuel();
	
	return 0;							
}
float calcRemainingFuel (int vehicalType, float usedFuelQuota)
{
	
	switch(vehicalType)
	{
		case 1:
		{
			allowedfuelquota = 5;
			remainingfuelquota = allowedfuelquota - usedFuelQuota;
			return remainingfuelquota;
		}
		case 2:
		{
			allowedfuelquota = 20;
			remainingfuelquota = allowedfuelquota - usedFuelQuota;
			return remainingfuelquota;
		}	
		case 3:
		{
			allowedfuelquota = 20;
			remainingfuelquota = allowedfuelquota - usedFuelQuota;
			return remainingfuelquota;
		}	
		case 4:
		{
			allowedfuelquota = 30;
			remainingfuelquota = allowedfuelquota - usedFuelQuota;
			return remainingfuelquota;
		}	
		default:
		{
			printf("Invalid vahical type Entered:\n");
		}	
	}
}
void testcalcRemainingFuel()
{
	assert(calcRemainingFuel(1,2)==3);
	assert(calcRemainingFuel(2,5)==15);	
}
float calcFuelcost(int vehicleType, float usedFuelQuota)
{
	
	switch(vehicleType)
	{
		case 1:
			{
				price = 370.00;
				fuelcost = usedFuelQuota * price;
				return fuelcost;
			}
		case 2:
			{
				price = 370.00;
				fuelcost = usedFuelQuota * price;
				return fuelcost;
			}
		case 3:
			{
				price = 510.00;
				fuelcost = usedFuelQuota * price;
				return fuelcost;
			}
		case 4:
			{
				price = 370.00;
				fuelcost = usedFuelQuota * price;
				return fuelcost;
			}
		default:
			{
				printf("Invalid vehical type Entered:\n");
			}	
	}
}
void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost)
	{
		printf("Vehicle type  Quotaused  QuotaRemaining  Fuel cost\n");
		printf("     %d          %.2f         %.2f         %.2f\n",vType,usedFuelQuota,remainingQuota,cost);
		
	}

