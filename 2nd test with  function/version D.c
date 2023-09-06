#include<stdio.h>
float calculateTotalcost(int itemNo,int quantity);
void printDetails(int itemno,int quantity, float totalCost);
int main()
{	
	int itemno,quantity;
	float Totalcost;
	
	printf("Enter the item no:");
	scanf("%d",&itemno);
	printf("Enter the quantity:");
	scanf("%d",&quantity);
	
	Totalcost=calculateTotalcost(itemno,quantity);
	printDetails(itemno,quantity,Totalcost);
	return 0;
}

float calculateTotalcost(int itemNo,int quantity)
{	float unitprice,Totalcost;
	switch(itemNo)
	{	
		case 1:
			unitprice=100.00;
			Totalcost = unitprice * quantity;
			break;
		
		case 2:
			unitprice=200.00;
			Totalcost = unitprice * quantity;
			break;
		
		
		case 3:
			unitprice=300.00;
			Totalcost = unitprice * quantity;
			break;
	}
	return Totalcost;
}

void printDetails(int itemno,int quantity, float totalCost)
{
	printf("Total cost is:%.2f",totalCost);
	
}


