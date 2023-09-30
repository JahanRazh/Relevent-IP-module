#include<stdio.h> 
int main()
{
	FILE *details;
	char itemid[10];
	int quantity,uniprice,price,totprice,i;
	char name[10];
	
	details=fopen("purchase.txt","w");
	//fprintf(details,"%s %10s %10d %12d","ItemID","Name","Quantity(kg)","Pricefor1kg\n");
	for(i=0;i<1;i++)
	{
		printf("enter the item id:");
		scanf("%s",&itemid);
		fprintf(details,"%s",&itemid);
		
		printf("enter name :");
		scanf("%s",&name);
		fprintf(details,"%10s",&name);
		
		printf("enter Quantity:");
		scanf("%d",&quantity);
		fprintf(details,"%10d",quantity);
		
		printf("enter the price:");
		scanf("%d",&uniprice);
		fprintf(details,"%12d\n",uniprice);
	}
	
	fclose(details);
	
	printf("%s %10s %16s %18s","Item","Quantity","UnitPrice","Price(Rs.)\n");
	details=fopen("purchase.txt","r");
	if (details == NULL)
	{
    	printf("File cannot be open\n");
   	 	return -1;
	}	
	//fscanf(details,"%s %10s %10d %12d","ItemID","Name","Quantity(kg)","Price for 1kg\n");
	fscanf(details,"%s %s %d %d",itemid,name,&quantity,&uniprice);
	while(!feof(details))
	{
		price=uniprice*quantity;
		totprice=totprice+price;
		printf("%s %8d %16d %15d\n",&name,quantity,uniprice,price);
		fscanf(details,"%s %s %d %d",itemid,name,&quantity,&uniprice);
	}	
	printf("Total  \t\t\t\t\t  %d",totprice);
	fclose(details);
	return 0;

}
