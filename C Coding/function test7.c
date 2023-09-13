#include<stdio.h>
// function with arguments and return value
int calculatesum(int n1,int n2);
int multiplication(int n1,int n2);

int main()
{
    int sum,num1,num2,multi,num3,num4;
    printf("Enter two number :\n");
    scanf("%d %d %d%d",&num1,&num2,&num3,&num4);

    sum=calculatesum(num1,num2);
    printf("sum=%d\n",sum);


    multi=multiplication(num3,num4);
    printf("multi=%d",multi);
    return 0;


}

int calculatesum (int n1,int n2)
{
    int sum;
    sum=n1+n2;
    return sum;
}

int multiplication (int n1,int n2)
{
    int multi;
    multi=n1*n2;
    return multi;
}
