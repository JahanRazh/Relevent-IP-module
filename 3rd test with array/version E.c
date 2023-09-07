#include<stdio.h>
int main()
{
	int arrnum[6];
	int i,count;
	printf("Enter values to the Array :\n");
    for(i=0;i<6;i++)
	{	
		scanf("%d",&arrnum[i]);
	}
	
	for(i=0;i<6;i++)
	{
		if(arrnum[i]>=arrnum[i+1])
		{
			count+=1;
		}
        //printf("%d\n",arrnum[i]);	
	}
	
	if(count==6)
	{
		printf("Numbers are stored in ascending order");	
	}
	else
	{
		printf("Numbers are not stored in ascending order");	
	}	
}
