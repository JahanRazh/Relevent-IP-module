#include <stdio.h>
int main(void)
{
	char name;
	int telNumb,i;
	char name1;
	
	FILE * cfPtr;
	cfPtr = fopen("Directory.dat","w");
	if(cfPtr == NULL)
	{
		printf("File cannot be open");
		return -1;
	}
	for(i=1;i<=5;i++)
	{
		printf("Enter name :");
		scanf("%s",&name);
	
		
		printf("Enter phone number :");
		scanf("%d",telNumb);
		
		fprintf(cfPtr, "%s %d\n",&name,telNumb);	
		
		//printf("\n");
	}
	fclose(cfPtr);


		cfPtr = fopen("Directory.dat","r");
		if (cfPtr == NULL )
		{
			printf("File connot be open");
			return -1;
		}
		printf("Enter name :\n");
		scanf("%s",&name1);
			
		fscanf(cfPtr, "%s %d\n",name,&telNumb);
		while(!feof(cfPtr))
		{
			
			if ( name1 == name )
			{
				printf("%d",telNumb);
			}
			printf("Invalid name");
			fscanf(cfPtr, "%s %d\n",name,&telNumb);
		
						
		}
	
		
		fclose(cfPtr);
	
return 0;
}

