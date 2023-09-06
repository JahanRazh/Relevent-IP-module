#include<stdio.h>
float getpercentage(int grade);
float calculateincrement(float percentage,float basicsalary);
int main()
{
	int grade;
	float salary,percentage,increment;
	printf("Enter the grade:");
	scanf("%d",&grade);
	
	printf("Enter the basic salary:");
	scanf("%f",&salary);
	
	percentage=getpercentage(grade);
	
	increment=calculateincrement(percentage,salary);
	printf("Increment is :%.2f",increment);
	
	return 0;	
}
float getpercentage(int grade)
{	
	float percentage;
	switch(grade)
	{
		case 1:
			percentage=10/100.0;
			break;
		case 2:
			percentage=15/100.0;
			break;
		case 3:
			percentage=20/100.0;
			break;
	}
	return percentage;
}
float calculateincrement(float percentage,float basicsalary)
{
	float increment;
	increment=basicsalary*percentage;
	return increment;
}
