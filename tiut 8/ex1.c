#include<stdio.h>
int main()
{
	int markarr[10];
	int newmark[]={};
	int i,mark,total;
	float avg=0.0;
	int count=0;
	for(i=0;i<10;i++)
	{	
		printf("enter the mark:");
		scanf("%d",&markarr[i]);
		if((markarr[i]<20)&&(markarr[i]>0))
		{	
			newmark[count]=markarr[i];		
			count+=1;
		}
	}
	for(i=0;i<count;i++)
	{	
		printf(" %d",newmark[i]);
		total=total+newmark[i];
	}
	avg=total/count;
	printf("\nmean of the marks in the array:%f",avg);
	
	return 0;
}
