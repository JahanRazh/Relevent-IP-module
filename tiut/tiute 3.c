#include<stdio.h>

int main(void)
{
	int radius,diameter;
	float circumference,area;
	float pi=22/7;
	printf("enter the radius:");
	scanf("%d",&radius);
	
	diameter=radius*2;
	
	printf("diameter is %d\n",diameter);
	
	circumference=2*22/7*radius;
	printf("circumference is :%lf\n",circumference);
	
	area=2*22/7*(radius*2);
	printf("area is :%.2lf\n",area);
	
	return 0;
}
