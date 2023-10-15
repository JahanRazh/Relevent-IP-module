#include<stdio.h>
// find the diameter,circumference,area,
int main(void)
{
	int radius,diameter;
	float circumference,area;
	float pi=22/7;
	printf("enter the radius:");
	scanf("%d",&radius);
	
	diameter=radius*2;
	
	printf("diameter is %d\n",diameter);
	
	circumference=2*pi*radius;
	printf("circumference is :%.2lf\n",circumference);
	
	area=2*22/7*(radius*2);
	printf("area is :%.2lf\n",area);
	
	return 0;
}
