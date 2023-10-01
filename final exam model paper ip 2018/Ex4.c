#include<stdio.h>
int main(void)
{
	char name[50];
	int no,number;
	int i,att,count;
	
	FILE *cptr;
	cptr=fopen("attendance.txt","w");
	
	if(cptr==NULL)
	{
		printf("cannot open the fle\n");
		return -1;
	}
	printf("Enter employee no to find no of attendance");
	scanf("%d",&no);
	fscanf(cptr,"%d %s",&number,name);
	
	while(!feof(cptr))
	{
		for(i=1;i<=7;i++)
		{
			fscanf(cptr,"%d",&att);
			
			if(att==1)
			{
				count++;
			}
		}
		if(no == number)
		{
			break;
		}
		count =0;
		fscanf(cptr,"%d %s",&number,name);
	}
	printf("Employee count %d",count);
	return 0;	
}
