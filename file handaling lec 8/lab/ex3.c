#include<stdio.h>
int main()
{
	int  accno,account=0,count,nicno,accbalance,i,transamount;
	char name,type,ch;
	FILE *trans;
	trans=fopen("transaction.txt","w");
	//fprintf(trans,"%s","Transaction type\t\tTransaction amount(Rs.)\n");
	fprintf(trans,"%9s%28d\n","D",1000);
	fprintf(trans,"%9s%28d\n","D",2000);
	fprintf(trans,"%9s%28d\n","W",500);
	fprintf(trans,"%9s%28d\n","D",1500);
	
	fclose(trans);
	
	FILE *acc;
	acc=fopen("account.txt","w");
	for(i=1;i<=1;i++)
	{
		printf("Enter the account no:");
		scanf("%d",&accno);
		fprintf(acc,"%d",accno);
		printf("Enter nic no:");
		scanf("%d",&nicno);
		fprintf(acc,"\t%d",nicno);
		printf("Enter the name:");
		scanf("%s",&name);
		fprintf(acc,"\t%s",&name);
		printf("Enter the account balance:");
		scanf("%d",&accbalance);
		fprintf(acc,"\t%d\n",accbalance);
	//	fprintf(acc,"%d %d %s %d\n",accno,nicno,&name,accbalance);
		
	}
	fclose(acc);

	acc=fopen("account.txt","r");
	if(acc == NULL)
	{
		printf("cannot open file");
	}
	printf("input the account no:");
	scanf("%d",&account);
	fscanf(acc,"%d\n",&accno);
	while(!feof(acc))
	{	
		
		if(account==accno)
		{
			fscanf(acc,"%d",&accbalance);
			printf("account balance is:%d\n",accbalance);
			break;		
		}
		fprintf(acc,"%s","\n");
		fscanf(acc,"%d",&accno);
		
	}
	
	fclose(acc);
	trans=fopen("transaction.txt","r");
	if(trans == NULL)
	{
		printf("cannot open file");
		return -1;
	}
	fscanf(trans,"%s",&type);
	while(!feof(trans))
	{	
		//printf("fuck%s",type);
		if(type == 'D')
		{
			fscanf(trans,"%d",&transamount);
			accbalance=accbalance+transamount;
			printf("updated balance of the account:%d\n",&accbalance);
		}
		else if(type == 'W')
		{
			fscanf(trans,"%d",&transamount);
			accbalance-=transamount;
			printf("updated balance of the account:%d\n",&accbalance);
		}	
		fscanf(trans,"%s",&type);
	}
	fclose(trans);
	return 0;
}
