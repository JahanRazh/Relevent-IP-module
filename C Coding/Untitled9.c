#include<stdio.h>
int main()
{
	int arr[10]={};
	int count=0;
	int num=0,max,i=0;
	
	
	for(i=0;i<10;i++)
	{	
			
		printf("Enter the number:");
		scanf("%d",&num);			
		if (num>10&&num<100)
		{
			arr[i]=num;
				
		}
		else
		{
			printf("Invalid number entered\n");
			i=i-1;
		}
		
	}
	max=arr[0];
	for(i=0;i<10;i++)
	{
		if (arr[i]>max)
		{
			max=arr[i];	
		}
		
	}
	
	printf("maximuas number is:%d",max);
	
	return 0;
}
