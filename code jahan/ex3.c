#include<stdio.h>

int main()
{
	int mark1,mark2,total;
	float average;
	
	printf( "enter the 1st mark:");
	scanf("%d",&mark1);
	printf( "enter the 2nd mark:");
	scanf("%d",&mark2);
	
	total=mark1+mark2;
	printf("total is :%d\n",total);
	
	average=total/2;
	printf("average is:%f",average);

	return 0;
}



