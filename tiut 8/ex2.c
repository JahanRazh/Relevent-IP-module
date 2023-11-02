#include<stdio.h>
#define SIZE 5
int main(void)
{
	int arr[SIZE];
	int newarr[SIZE];
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("Enter the value:");
		scanf("%d",&arr[i]);
	}
	printf("Initial values");
	for(i=0;i<SIZE;i++)
	{
		printf(" %d",arr[i]);	
	}
	printf("\nAfter rotating");
	for(i=1;i<SIZE;i++)
	{
		newarr[i-1]=arr[i];	
	}
	newarr[4]=arr[0];
	for(i=0;i<SIZE;i++)
	{
		printf(" %d",newarr[i]);	
	}
	
	
}
