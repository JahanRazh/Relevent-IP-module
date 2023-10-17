#include<stdio.h>
int main()
{
	int num=1,sum,count;
	float avg;
	while (num>0)
	{
		printf("enter the number:");
		scanf("%d",&num);
		
		if (num>0)
		{
			count=count+1;
			sum=sum+num;
			avg=sum/count;
		}
		
			
		 	
		
	
	}
	
	printf("sum is :%d",sum);
	
	printf("avg is :%f",avg);
	return 0;
}
