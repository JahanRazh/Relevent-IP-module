#include<stdio.h>
int main()
{	int i,j;
	int value[10]={19,3,15,7,11,9,13,5,17,1};
	printf("Element\tValue\tHistogram\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t%d\t",i,value[i]);
		for(j=0;j<value[i];j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
