#include <stdio.h>
int main()
{
	char insurance;
	char premium;
	float total;
	int nochild;
	char repeat;
	do
	{ 
	
	
	printf("insurance Type :");
	scanf(" %c",&insurance);
	
	printf("family or individual (F-family and I-individual):");
	scanf(" %c",&premium);		
	switch(insurance)
		{
			case 'A':
				if(premium=='F')
				{	printf("Number of children:");
					scanf("%d",&nochild);
					if (nochild>2)
					{
						total=5200.00+(5200*(nochild-2)*10/100.00);
						break;
					}			
					else
						total=5200.00;
						break;	
				}	
				else if (premium=='I')
					total=4500.00;	
					break;
			case 'N':
				if(premium=='F')
				{	printf("Number of children:");
					scanf("%d",&nochild);
					if (nochild>2)
					{
					total=4300.00+(4300*(nochild-2)*10/100.00);
					break;
					}
					else
						total=4300.00;
						break;
				}	
				else if (premium=='I')
					total=3100.00;
					break;	
			case 'D':
				if(premium=='F')
				{	printf("Number of children:");
					scanf("%d",&nochild);
				 	if (nochild>2)
						{
						total=4800.00+(4800*(nochild-2)*10/100.00);
						break;
						}
					else
						total=4800;
						break;
				}	
				else if (premium=='I')
					total=3600.00;
					break;
			case 'S':
				if(premium=='F')
				{	
					printf("Number of children:");
					scanf("%d",&nochild);
					if (nochild>2)
						{
						total=3800.00+(5200*nochild-2*10/100.00);
						break;
						}
					else
						total=3800;
						break;
				}
				else if (premium=='I')
					total=3300.00;
					break;
				
			default:
				printf("Invalide insurance Type !\n");
				break;
		
		}
		printf("Do you want to continue:");
		scanf(" %c",&repeat);
		if (repeat=='Y'||repeat=='y')
			{
			printf("Total Amount:%.2f\n",total);
			continue;
			}	
		
		else if(repeat=='N'||repeat=='n')
			{
			printf("Total Amount:%.2f\n",total);
			break;
			}
			
	}while(repeat);
	return 0;
}
