#include <stdio.h>
int main(void)
{
	int atten;
	float salary, bonus;

	printf( "Enter the attendance:" );
	scanf( "%d", &atten );

	printf(" Enter the employe basic salary: ");
	scanf( "%f", &salary);
	
	if ( atten>=300 )
	{
		bonus=salary*25/100.0;
		printf("bonus is %.2f",bonus);	
	}
	else if ( atten<=299&&atten>=280 )
	{
		bonus=salary*20/100.0;
		printf("bonus is %.2f",bonus);	
	}
	else if ( atten<=279&&atten>=265 )
	{
		bonus=salary*15/100.0;
		printf("bonus is %.2f",bonus);	
	}
	else if (atten<=264&&atten>=250)
	{
		bonus=salary*10/100.0;
		printf("bonus is %.2f",bonus);	
	}
	
	else if(atten<=249&&atten>=230)
	{
		bonus=salary*5/100.0;
		printf("bonus is %.2f",bonus);	
	}
	else if(atten<230)
	{
		printf("NO BONUS");
	}
return 0;	
}

