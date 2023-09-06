#include<stdio.h>
int main()
{
	int  T_room, Nofday;
	char A_basis, R_card;
	float amount = 0.00, discount = 0.00;
	
	printf("Enter type of room(1, 2, 3) :");
	scanf("%d", &T_room);
	
	while(T_room != -1)
	{
		if(T_room == 1)
		{
			printf("Enter the Accommodation Basis (F/H) : ");
			scanf("%s", &A_basis);
			
			if(A_basis == 'f' || A_basis == 'F')
			{
				printf("Enter Reward Card Type ( G, S, B ) : ");
				scanf("%s", &R_card);
				
				if(R_card == 'g' || R_card == 'G')
				{
					printf("Enter No of days :");
					scanf("%d", &Nofday);
					
					discount = 25555.00 * 12.5 / 100.0;
					amount = (25555.00 - discount) * Nofday ;
				}
				 else if(R_card == 's' || R_card == 'S')
				{
					printf("Enter No of days :");
					scanf("%d", &Nofday);
					
					discount = 25555.00 * 11.5 / 100.0;
					amount = (25555.00 - discount) * Nofday;
				}
				else if(R_card == 'b' || R_card == 'B')
				{
					printf("Enter No of days :");
					scanf("%d", &Nofday);
					
					discount = 25555.00 * 9.5 / 100.0;
					amount = (25555.00 - discount) * Nofday;
				}
				
			}
			else if(A_basis == 'h' || A_basis == 'H')
			{
				printf("Enter Reward Card Type ( G, S, B ) : ");
				scanf("%s", &R_card);
				
				if(R_card == 'g' || R_card == 'G')
				{
					printf("Enter No of days :");
					scanf("%d", &Nofday);
					
					discount = 17250.00 * 12.5 / 100.0;
					amount = (17250.00 - discount) * Nofday;
				}
				 else if(R_card == 's' || R_card == 'S')
				{
					printf("Enter No of days :");
					scanf("%d", &Nofday);
					
					discount = 17250.00 * 11.5 / 100.0;
					amount = (17250.00 - discount) * Nofday;
				}
				else if(R_card == 'b' || R_card == 'B')
				{
					printf("Enter No of days :");
					scanf("%d", &Nofday);
					
					discount = 17250.00 * 9.5 / 100.0;
					amount =(17500.00 - discount) * Nofday;
				}
				
			}
		}
		else if(T_room == 2)
		{
			printf("Enter the Accommodation Basis (F/H) : ");
			scanf("%s", &A_basis);
			
			if(A_basis == 'f' || A_basis == 'F')
			{
				printf("Enter Reward Card Type ( G, S, B ) : ");
				scanf("%s", &R_card);
				
				if(R_card == 'g' || R_card == 'G')
				{
					printf("Enter No of days :");
					scanf("%d", &Nofday);
					
					discount = 17500.00 * 12.5 / 100.0;
					amount = (17500.00 - discount) * Nofday;
				}
				 else if(R_card == 's' || R_card == 'S')
				{
					printf("Enter No of days :");
					scanf("%d", &Nofday);
					
					discount = 17500.00 * 11.5 / 100.0;
					amount = (17500.00 - discount) * Nofday;
				}
				else if(R_card == 'b' || R_card == 'B')
				{
					printf("Enter No of days :");
					scanf("%d", &Nofday);
					
					discount = 17500.00 * 9.5 / 100.0;
					amount = (17500.00 - discount) * Nofday;
				}
				
			}
			else if(A_basis == 'h' || A_basis == 'H')
			{
				printf("Enter Reward Card Type ( G, S, B ) : ");
				scanf("%s", &R_card);
				
				if(R_card == 'g' || R_card == 'G')
				{
					printf("Enter No of days :");
					scanf("%d", &Nofday);
					
					discount = 12250.00 * 12.5 / 100.0;
					amount = (12250.00 - discount) * Nofday;
				}
				 else if(R_card == 's' || R_card == 'S')
				{
					printf("Enter No of days :");
					scanf("%d", &Nofday);
					
					discount = 12250.00 * 11.5 / 100.0;
					amount = (12250.00 - discount) * Nofday;
				}
				else if(R_card == 'b' || R_card == 'B')
				{
					printf("Enter No of days :");
					scanf("%d", &Nofday);
					
					discount = 12250.00 * 9.5 / 100.0;
					amount = (12250.00 - discount) * Nofday;
				}
				
			}
		}
		else if(T_room == 3)
		{
			printf("Enter the Accommodation Basis (F/H) : ");
			scanf("%s", &A_basis);
			
			if(A_basis == 'f' || A_basis == 'F')
			{
				printf("Enter Reward Card Type ( G, S, B ) : ");
				scanf("%c", &R_card);
				
				if(R_card == 'g' || R_card == 'G')
				{
					printf("Enter No of days :");
					scanf("%d", &Nofday);
					
					discount = 9000.00 * 12.5 / 100.0;
					amount = (9000.00 - discount) * Nofday;
				}
				 else if(R_card == 's' || R_card == 'S')
				{
					printf("Enter No of days :");
					scanf("%d", &Nofday);
					
					discount = 9000.00 * 11.5 / 100.0;
					amount = (9000.00 - discount) * Nofday;
				}
				else if(R_card == 'b' || R_card == 'B')
				{
					printf("Enter No of days :");
					scanf("%d", &Nofday);
					
					discount = 9000.00 * 9.5 / 100.0;
					amount = (9000.00 - discount) * Nofday;
				}
				
			}
			else if(A_basis == 'h' || A_basis == 'H')
			{
				printf("Enter Reward Card Type ( G, S, B ) : ");
				scanf("%s", &R_card);
				
				if(R_card == 'g' || R_card == 'G')
				{
					printf("Enter No of days :");
					scanf("%d", &Nofday);
					
					discount = 7250.00 * 12.5 / 100.0;
					amount = (7250.00 - discount) * Nofday;
				}
				 else if(R_card == 's' || R_card == 'S')
				{
					printf("Enter No of days :");
					scanf("%d", &Nofday);
					
					discount = 7250.00 * 11.5 / 100.0;
					amount = (7250.00 - discount) * Nofday;
				}
				else if(R_card == 'b' || R_card == 'B')
				{
					printf("Enter No of days :");
					scanf("%d", &Nofday);
					
					discount = 7250.00 * 9.5 / 100.0;
					amount = (7250.00 - discount) * Nofday;
				}
				
			}
		}
		else 
		{
			printf("Invlid roo type \n");
		
		}
	
	printf("Enter type of room(1, 2, 3) :");
	scanf("%d", &T_room);
		
	}
	printf("Amount(Rs.) : %.2f", amount);
	
	
	
	
	return 0;
}
