#include<stdio.h>
#include<string.h>

int main()
{
struct member
{
	int accnum;
	char name[10];
	char transtype[10];
	int amount;
}mem[5];

int totalwithamount = 0;
int totaldepamount = 0;
int i, min_with_index = 0, max_dep_index = 0;
char miniwithdraw[10];
char maxdeposit[10];

for(i=0;i<2;i++)
{
    printf("Enter the account number:");
    scanf("%d", &mem[i].accnum);
    printf("Enter the name:");
    scanf("%s",&mem[i].name);
    printf("Enter the transtype:");
    scanf("%s",&mem[i].transtype);
    printf("Enter the amount:");
    scanf("%d",&mem[i].amount);
}
strcpy(miniwithdraw, mem[0].name);
strcpy(maxdeposit, mem[0].name);

for(i=0;i<2;i++)
{
    if(mem[i].transtype[0] == 'W'||mem[i].transtype[0] == 'w')
    {
        totalwithamount += mem[i].amount;
        if(mem[i].amount <= mem[min_with_index].amount)
        {
            min_with_index = i;
        }
    }
    else if(mem[i].transtype[0] == 'D'||mem[i].transtype[0] == 'd')
    {
        totaldepamount += mem[i].amount;
        if(mem[i].amount >= mem[max_dep_index].amount)
        {
            max_dep_index = i;
        }
    }
}
printf("Total deposit amount: %d\n", totaldepamount);
printf("Total withdrawal amount: %d\n", totalwithamount);
printf("Name of the customer with the minimum withdraw amount: %s\n", mem[min_with_index].name);
printf("Name of the customer with the maximum deposit amount: %s\n", mem[max_dep_index].name);

return 0;
}
