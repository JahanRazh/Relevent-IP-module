#include <stdio.h>
int add(int a, int b);                 //declaration of function

int main(){                            // Main function
    int num1,num2,sum;
    printf("Enters two numbers :\n");
    scanf("%d %d",&num1,&num2);

    sum=add(num1,num2);                // function call
    printf("sum=%d",sum);
    return 0;
}

int add(int a,int b)            //funtion declarator(user defined function)
{
    /*start of function definition*/
    int addition;
    addition=a+b;                                       //return statement of function
    return addition;
    /*end of function definition*/
}
