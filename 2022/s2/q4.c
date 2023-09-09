#include<stdio.h>
int main()
{
	FILE *student;
	char stid,i;
	int noans;
	int curans[4];	
	student=fopen("answers.txt","w");
	if(student==NULL)
	{
		printf("cannot open file.");
		return -1;
	}
	for(i=0;i<4;i++)
	{
		printf("Enter the student id:");
		scanf("%s",&stid);
		//fprintf(student,"%s",stid);
	
		printf("Enter number of Answer:");
		scanf("%d",&noans);
		fprintf(student,"%s\t%d\n",&stid,noans);		
	}
	
	
	fclose(student);
/*	
	student=fopen("answers.txt","r");
	
	if(student==NULL)
	{
		printf("caannot open file.");
	}
	

	
	for(i=0;i<!feof(student))
	{
		fscanf(student,"%s\t%d",&stid,noans);
		curans[i]=noans;
		printf("%d\t",stid);
		if()
	}
	
	fclose(student);*/
}
