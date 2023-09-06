#include <stdio.h>
int main()
{	
	int i,j,g;
	for(i=1;i<=5;i++)
	{
		for(g=1;g<=5-i;g++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{ 
			printf("%d",j);	
		}
		printf("\n");
	}
	return 0;
}
