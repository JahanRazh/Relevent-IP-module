#include<stdio.h>
float calculateweeksalary(int grade,float hrsworked);
void printdetails(int grade, float hrsWorked, float salary);
int main()
{
	int grade;
	float hours,salary;
	
	printf("Enter the grade:");
	scanf("%d",&grade);
	printf("Total no of hours worked");
	scanf("%f",&hours);
	
	//salary=calculateweeksalary(grade,hours);
	//printdetails(grade,hours,salary);
	
	printdetails(grade,hours,calculateweeksalary(grade,hours));
		
	return 0;
}

float calculateweeksalary(int grade,float hrsworked)
{
	if (grade==1)
	{
		return 100.00*hrsworked;
	}
	else if (grade==2)
	{
		return 200.00*hrsworked;
	}
	else if (grade==3)
	{
		return 300.00*hrsworked;
	}
	
}
void printdetails(int grade, float hrsworked, float salary)
{
	printf("grade is:%d\nhrsworked is:%.2f\nsalary is:%.2f",grade,hrsworked,salary);	
	
}
