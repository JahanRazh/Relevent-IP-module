#include<stdio.h>
int main()
{
	int image[5][5];
	int i,j;
	for(i=0;i<4;i++)
	{	
		printf("Values for row %d:\n",i+1);
		for(j=0;j<4;j++)
		{
			printf("\tEnter the Element %d:",j+1);
			scanf("%d",&image[i][j]);
		}
		printf("\n");	
	}
	
	for(i=0;i<4;i++)
	{	
		for(j=0;j<4;j++)
		{
			printf("%d ",image[i][j]);
		}
		printf("\n");	
	}
	
	printf("\n\n");
	
	for(i=0;i<4;i++)
	{	
		for(j=0;j<4;j++)
		{
			if (image[i][j] > 55)
			{
				
				printf("1 ");
			}
			else if(image[i][j] <= 55)
			{
				printf("0 ");
			}
		}
		printf("\n");	
	}
	
	
	
}
