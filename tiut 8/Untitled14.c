#include<stdio.h>
int main(void)
{
	int a[10] = {19,3,15,7,11,9,13,5,17,1};
	int i=0,j=0;
	
	printf("%s%13s%13s\n","Element","Value","Histogram");
	
	for(i=0;i<10;i++)
	{
		printf("%d%17d\t",i,a[i]);
		
		for (j=0;j<a[i];j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;		
}
