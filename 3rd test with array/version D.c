#include<stdio.h>
int main()
{
	int num[8];
	int integer,count;
	int i;
	for(i=0;i<8;)
	{
		
		printf("Enter the number:");
		scanf("%d",&integer);
		if(integer>0&&integer<=4)
		{
			num[i]=integer;	
			i++;
		}
	}
	for(i=0;i<8;i++)
	{ 
		printf(" %d",num[i]);
	}
	for(i=0;i<8;i++)
	{
		if(num[i] == 1)
			if(num[i+1] == 3)
				count+=1;
		
	}
	printf("\nNumber of times the pattern '1 3' appear:%d",count);
}
