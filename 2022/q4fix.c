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
	for(i=1;i<=2;i++)
	{
		printf("Enter name :");
		scanf("%s",name);
	
		
		printf("Enter phone number :");
		scanf("%s",telNumb);
		
		fprintf(cfPtr,"%s %s",name,telNumb);	
		
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
	scanf("%s",name1);		
	//fscanf(cfPtr,"%s%d",name,&telNumb);
	//int found = 0;
	while(!feof(cfPtr))
	{
		
		fscanf(cfPtr,"%s %s",name,telNumb);	
		if(strcmp(name1,name) == 0)
		{
			printf("%s",telNumb); 
			//found = 1;
			break;
		}
		else
		{
			printf("Invalid name");
			printf("Enter the searching name:");
			scanf("%s",name1);			
		}
		
	}
	//if (!found) 
	//{
	//	printf("Invalid name");	
	//}
	
	fclose(cfPtr);
	
	return 0;
}

