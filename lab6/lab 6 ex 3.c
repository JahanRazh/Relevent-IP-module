#include <stdio.h>
float circleArea(float radius);
float cirlclePeri(float radius);
float recArea(float width,float length);
int main(void)
{
	float radius,height,cArea,cperi,rarea;
	
	printf("Enter radius:");
	scanf("%f",&height);
	
	printf("Enter height:");
	scanf("%f",&height);
	
	//calling function
	cArea = circleArea(radius);
	cPeri = circleperi(radius);
	rArea = recArea(height,cperi);
	
	Area=(2*cArea)+rArea;
	
	printf("Area is %.2f",Area);
	
	
	
}

//function implementation
float circleArea(float radius)
{
	float cArea;
	
	cArea = (22.0/7)*radius*radius;
	return cArea;
}
float circleperi(float radius)
{
	float cperi;
	
	cperi = 2*(22.0/7)*radius;
	return cperi;
}
float recArea(height,cperi)
{
	float rArea;
	
	rArea=2*(22.0/7)*radius*height;
	return rArea;
}
	


