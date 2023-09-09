#include <stdio.h>
#include <string.h>
int main()
{

	
	FILE *cfPtr;
	char name[10];
	char telNumb[10];
	int i;
	char name1[10];
	cfPtr = fopen("Directory.txt","w");
	
	if(cfPtr == NULL)
	{
		printf("File cannot be open");
		return -1;
	}
	for(i=1;i<=1;i++)
	{
		printf("Enter name :");
		scanf("%s",&name);
	
		
		printf("Enter phone number :");
		scanf(" %d",&telNumb);
		
		fprintf(cfPtr,"%s %d",&name,telNumb);	
		
		//printf("\n");
	}
	fclose(cfPtr);

	cfPtr = fopen("Directory.txt","r");
	if (cfPtr == NULL )
	{
		printf("File connot be open");
		return -1;
	}
	
	printf("Enter the searching name:");
	scanf("%s",&name1);		
	//fscanf(cfPtr,"%s%d",name,&telNumb);
	while(!feof(cfPtr))
	{
		
		fscanf(cfPtr,"%s %d",name,&telNumb);	
		if(name1 == name)
		{
			printf("%d",telNumb); 
		}
		
		
	}
	printf("Invalid name");
	
	fclose(cfPtr);
	
return 0;
}

