#include<stdio.h>
  struct member
    {
        int accnum;
        char name;
        char transtype;
        int amount;
    }mem[5];
int main()
{
  
    
	int totalwithamount = 0;
	int totaldepamount = 0;
	int i, j;
    int miniwithdraw;
    int maxdeposit;
    char withnamemin[5],depnamemax[5];
	char mininame,maxname;
    for(i=0;i<2;i++)
    {
        printf("Enter the account number:");
        scanf("%d", &mem[i].accnum);
        printf("Enter the name:");
        scanf("%s", &mem[i].name);
        printf("Enter the transtype:");
        scanf("%s", &mem[i].transtype);
        printf("Enter the amount:");
        scanf("%d", &mem[i].amount);
    }
	
    miniwithdraw=mem[0].amount;
    maxdeposit=mem[0].amount;

    for(i=0;i<2;i++)
    {
        if(mem[i].transtype == 'W'||mem[i].transtype == 'w')
        {
            totalwithamount += mem[i].amount;
            if(mem[i].amount <= miniwithdraw)
            {
            	mininame=mem[i].name;
            }
        }
        if(mem[i].transtype == 'D'||mem[i].transtype == 'd')
        {
            totaldepamount += mem[i].amount;
            if(mem[i].amount >= maxdeposit)
            {
				maxname=mem[i].name;
            }
        }
    }
    printf("Total deposit amount: %d\n", totaldepamount);
    printf("Total withdrawal amount: %d\n", totalwithamount);
    printf("Name of the customer with the minimum withdraw amount: %s\n",&mininame);
    printf("Name of the customer with the maximum deposit amount: %s\n",&maxname);

    return 0;
}

