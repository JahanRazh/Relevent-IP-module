#include<stdio.h>
float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount);

int main(void)
{	
	int noOfGuests; 
	float chargePerGuest,discount;
	printf("Enter no of guests:");
	scanf("%d",&noOfGuests);
	
	printf("Enter charge per guest:");
	scanf("%f",&chargePerGuest);
	
	if (noOfGuests>200)
	{
		discount=getDiscountPrice(noOfGuests,chargePerGuest);
		printf("Discount:%.2f",discount);	
	}
	
	chargePerGuest=getAmount(noOfGuests,chargePerGuest,discount);	
	printf("\nAmount to be paid:%.2f",chargePerGuest);
	return 0;
}

float getDiscountPrice(int noOfGuests, float chargePerGuest)
{
	float discount;
	discount=(noOfGuests*chargePerGuest)*10/100.00;
	return discount;
	
}

float getAmount(int noOfGuests, float chargePerGuest, float discount)
{	
	chargePerGuest = (noOfGuests * chargePerGuest)-discount;
	//printf("Discount:%.2f\nAmount to be paid:%.2f",discount,chargePerGuest);
	return chargePerGuest;
}
