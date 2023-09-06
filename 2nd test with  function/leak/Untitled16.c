#include<stdio.h>
float calcincrement(float salary,int noofyearsworked);
float calctotsalary(float salary,float increment);
int main()
{
	int years;
	float salary,total;
	float increment;
	
	printf("Enter salary:");
	scanf("%f",&salary);
	printf("Enter no of years worked:");
	scanf("%d",&years);
	
	increment=calcincrement(salary,years);
	total=calctotsalary(salary,increment);
	
	printf("increment:%f:\n",increment);
	printf("Total salary:%f",total);
	
	return 0;
}
float calcincrement(float salary,int noofyearsworked)
{
	if (noofyearsworked>2)
	{
		return salary*10/100.0;
	}
	else
	{
		return 0;
	}
}

float calctotsalary(float salary,float increment)
{
	
	return salary+increment;
}
