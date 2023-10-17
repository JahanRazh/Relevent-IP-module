#include<stdio.h>
int main()
{
	int mod=1,mark,total,stno=1,highest=0;
	while (stno<=3){
		printf("student %d\n ",stno);
		mod=1,total=0;
		while (mod<=4)
		{
			printf("Enter The Mark Module%d:",mod);
			scanf("%d",&mark);
			total=total+mark;
			mod=mod+1;
		}
		printf("\ntotal is %d\n",total);
		stno=stno+1;
		if (total > highest)
		{
			highest=total;
			
		}
	
	
	}
	printf("\nhighest is:%d",highest);
	
	return 0;
}
