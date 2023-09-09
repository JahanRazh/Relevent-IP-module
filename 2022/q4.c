#include <stdio.h>
int main()
{
	char name;
	int telNumb,i;
	char name1;
	
	FILE * cfPtr;
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
		scanf("%d",&telNumb);
		
		fprintf(cfPtr,"%s %d\n",&name,telNumb);	
		
		//printf("\n");
	}
	fclose(cfPtr);


	cfPtr = fopen("Directory.txt","r");
	if (cfPtr == NULL )
	{
		printf("File connot be open");
		return -1;
	}
	printf("Enter name :");
	scanf(" %c",&name1);
			
	fscanf(cfPtr,"%s %d",name,&telNumb);
	while(!feof(cfPtr))
	{
		
		if(name1 == name)
		{
			printf("%d",telNumb);
		}
		fscanf(cfPtr, "%s %d\n",&name,&telNumb);	
		
	}
	printf("Invalid name");
	
	fclose(cfPtr);
	
return 0;
}

