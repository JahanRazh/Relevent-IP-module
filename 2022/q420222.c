#include<stdio.h>
int main()
{
	FILE *student;
	
	char stid[10],i,j;
	int noans[10];
	int noofcurrectans;	
/*	student=fopen("answers.txt","w");
	if(student==NULL)
	{
		printf("cannot open file.");
		return -1;
	}
	for(i=0;i<4;i++)
	{
		printf("Enter the student id:");
		scanf("%s",&stid);
		//fprintf(student,"%s",&stid);
	
		printf("Enter number of Answer:");//concider one line answer entered 
		scanf("%d",&noans);
		//fprintf(student,"%d",noans);
		
		fprintf(student,"%s\t%d\n",&stid,noans);		
	}
	
	fclose(student);
*/	
	student=fopen("answers.txt","r");
	
	if(student==NULL)
	{
		printf("caannot open file.");
	}
	
	for(j=0;i<!feof(student);j++)
	{
		fscanf(student,"%s\t%d",&stid,noans);
		for(i=0;i<4;i++)
		{	noofcurrectans=0;
			if(noans[i]==1)
			{
				noofcurrectans=noofcurrectans+1;
			}
				
			if(noans[i]==4)
			{
				noofcurrectans=noofcurrectans+1;
			}
			if(noans[i]==2)
			{
				noofcurrectans=noofcurrectans+1;
			}	
			if(noans[i]==3)
			{
				noofcurrectans=noofcurrectans+1;
			}	
				
			printf("%s\t",stid);
			printf("%d\n",noofcurrectans);
		}
		
	}
	
	fclose(student);
}
