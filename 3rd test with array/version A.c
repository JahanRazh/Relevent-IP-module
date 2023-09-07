#include<stdio.h>
int main()
{
	int i,odd=0,even=0;
	int number[6]={0};
	int oddnumber[]={0};
	int evennumber[]={0};
	
	for(i=0;i<6;i++)
	{
		printf("Enter the number:");
		scanf("%d",&number[i]);
	}
	printf("Number series :");
	for(i=0;i<6;i++)
	{
		printf(" %d",number[i]);
	}
	printf("\n");
	for(i=0;i<6;i++)
	{	
		if(number[i]%2==1)
		{
			oddnumber[odd]=number[i];
			odd+=1;
		}	
		
		else if(number[i]%2==0)
		{
			evennumber[even]=number[i];
			even+=1;
		}
	}
	
	printf("Odd Numbers :");
	for(i=0;i<odd;i++)
	{
		printf(" %d",oddnumber[i]);
		
	}
	printf("\n");
	printf("even Numbers :");
	for(i=0;i<even;i++)
	{
		printf(" %d",evennumber[i]);
		
	}
	
	return 0;	
		
}
