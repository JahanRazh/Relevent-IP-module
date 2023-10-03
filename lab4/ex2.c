#include<stdio.h>
int main(void)
{
	char shape;
	float width,length,base,height,radius;
	float rectanglearea,trianglearea,circlearea;
	printf("please enter the shape R T C:")
	scanf("%c",&shape);
	
	if(shape =="R")
	{
		printf("Enter width:");
		scanf("%f",&width);
		printf("enter  Length:";
		scanf("%f",&length);
		
		area=width*length;
		
		printf("Area of th Rectangel=%.2f",area);
		
	}else if(shape == "T")
	{
		printf("Enter base:");
		scanf("%f",&base);
		printf("enter  height:";
		scanf("%f",&height);
		
		area=(base*height)/2;
		printf("Area of th Triangle=%.2f",area);	
	}else if(shape == "C")
	{
	
	
	}
		
	}
	
	
	
}
