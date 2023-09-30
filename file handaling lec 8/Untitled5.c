#include<stdio.h>
int main(void)
{
	int number=10;
	int i;
	
	FILE *cptr;
	
	cptr =fopen("answer.txt","r");
	
	if(cptr==NULL)
	{
		printf("cannot open file...");
		return -1;
	}
	
	//read to the value from the file 
	fscanf(cptr,"%d",&number);
	
	//print in the command promot
	printf("Ther number is %d",number);
	
	//close file
	fclose(cptr);
	
	return 0;

}
