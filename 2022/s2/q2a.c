#include<stdio.h>
int main()
{
	int userRating[5];
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("Enter the number of rating:");
		scanf("%d",&userRating[i]);
		if(userRating[i]==-99)
			break;
		
	}
		
	for(i=0;i<5;i++)
	{	
		if(userRating[i]==-99)
			break;
		else
		{
			printf("%d ",i+1);
			for(j=0;j<userRating[i];j++)
			{	
				printf("*");
			}
			printf("\n");			
		}
		
	}
		
}
