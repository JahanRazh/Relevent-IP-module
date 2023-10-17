#include<stdio.h>
int main()
{
	int mod=1,mark,total;
	while (mod<=4)
	{
		printf("enter the mark:");
		scanf("%d",&mark);
		total=total+mark;
		mod=mod+1;
	}
	printf("total is %d",total);
	return 0;
}
