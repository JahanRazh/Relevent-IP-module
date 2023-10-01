#include<stdio.h>
int main(void)
{
	
	FILE *cptr;
	
	cptr =fopen("answer.dat","r");
	char name[50];
	int age;
	
	if(cptr==NULL)
	{
		printf("cannot open file...");
		return -1;
	}
	
	//read to the value from the file 
	fscanf(cptr,"%s %d",name,&age);
	
	while(!feof(cprt))
	{
		printf("name is %s and age is %d\n",name,age);
		fscanf(cprt,"%s %d",name,&age);
	}
	
	//close file
	fclose(cptr);
	
	return 0;

}
