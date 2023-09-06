#include<stdio.h>
int main(void)
{	
	int mark,mini,max;
	printf("Enter the mark:");
	scanf("%d",&mark);
	if (mark<=100&&mark>0)
	{
		mini=mark;
		max=mark;
		while(mark)
		{	
			if (mark==-99)
				{
					break;	
				}	
			if (mark<=100&&mark>0)
			{			
			
				if (mark<=mini)
				{
					mini=mark;
				}
				if(mark>=max)
				{
					max=mark;
				}		
			}
			else
			{
				printf("Invalide mark\n");
				printf("Enter the mark:");
				scanf("%d",&mark);
				continue;
			}
		printf("Enter the mark:");
		scanf("%d",&mark);		
	
		}
		printf("Minimume mark is:%d\n",mini);
		printf("Maxiume mark is:%d",max);
	}
	return 0;

}
