#include<stdio.h>

struct item {
  
  int  itemno;
  double price;
  int quantity; 

}item1,item2;

int main()
{
	printf("Enter item1 number:");
	scanf("%d",&item1.itemno);
	
	printf("Enter item1 price:");
	scanf("%lf",&item1.price);
	
	printf("Enter item1 quantity:");
	scanf("%d",&item1.quantity);
	
	printf("Enter item2 number:");
	scanf("%d",&item2.itemno);
	
	printf("Enter item1 price:");
	scanf("%lf",&item2.price);
	
	printf("Enter item1 quantity:");
	scanf("%d",&item2.quantity);
	
	printf("\n   item\t   price\t   quantity");
	printf("\n   %d",item1.itemno);
	printf("\t   %lf",item1.price);
	printf("\t   %d\n",item1.quantity);
	
	printf("\n   %d",item2.itemno);
	printf("\t   %lf",item2.price);
	printf("\t   %d\n",item2.quantity);
	
	
	
	return 0;




}
