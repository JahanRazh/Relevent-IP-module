#include<stdio.h>
int main(void)
{
	int number=10;
	int i;
	
	FILE *cptr;
	
	cptr =fopen("answer.dat","w");
	
	if(cptr==NULL)
	{
		printf("cannot open file...");
		return -1;
	}
	
	//write to the file 
	
	for(i=0;i<5;i++)
	{
		printf(cprt,"the number is %d",number);
	}
	
	//close file
	fclose(cptr);
	
	return 0;

}
