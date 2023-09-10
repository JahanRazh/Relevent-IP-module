#include<stdio.h>
int main()
{
	char empNo[10];
	char empNo1[10];
	char name[4];
	char attStatus[10];
	int i,j;
	int count=0;
	
	FILE *cfPtr;
	
	cfPtr = fopen("attendance.dat","r");
	printf("Input Employee Number : ");
	scanf("%s",&empNo1);
		
		//fscanf(cfPtr,"%s",&empNo1);
	while(!feof(cfPtr))
	{
		fscanf(cfPtr,"%s%s%s",empNo,name,attStatus);
		if(strcmp(empNo,empNo1)==0)
		{
			for(j=0;j<=7;j++)
			{
				if(attStatus[j]=='1')
				{
					count=count+1;
					break;
				}
			}
		}
	//printf("Total number of day %d \n",count);
		
	}
	printf("Total number of day %d \n",count);
	//fscanf(cfPtr,"%s ",&attStatus);

	fclose(cfPtr);
}
