#include <stdio.h>
double celcius(double Fahrenheit);
double kelvin(double celcius);

int main()
{
  
  double Fahrenheit;
  double celcius1,kelvin1;
    
  printf("Enter the temprature:");
  scanf("%lf",&Fahrenheit);
  
  celcius1 = celcius(Fahrenheit);
  kelvin1 =  kelvin(celcius1);	
  
  printf("celcius is:%.2lf\n",celcius1);
  printf("kelvin is:%.2lf",kelvin1);
  
  return 0;
}
double celcius(double Fahrenheit)
{
	double celcius1;
	celcius1=(5/9.0)*(Fahrenheit-32);
	return celcius1;	
}

double kelvin(double celcius)
{
	double kelvin1;
	kelvin1=celcius+237;
	return kelvin1;
}
