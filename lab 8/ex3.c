#include<stdio.h>
int main(void)
{
	int arr[12];
	int monthmax=0;
	int monthmin=0;
	int i;
	int max;
	int min;
	for(i=0;i<12;i++)
	{
		printf("Enter the average %d month rain fall:",i+1);
		scanf("%d",&arr[i]);
		
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<12;i++)
	{
		if(arr[i]<=min)
			{
			monthmin=i+1;
			min=arr[i];
			}
		if(arr[i]>=max)
			{
			monthmax=i+1;
			max=arr[i];
			}
		
		
	}
	printf(" month with the maximum rainfal month=%d,maximum rainfal=%d\n",monthmax,max);
	printf(" month with the minimum rainfal month=%d,minimum rainfal=%d\n",monthmin,min);

}
