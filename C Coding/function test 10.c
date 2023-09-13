#include<stdio.h>
//function with argument and no return value
int calculatesum(int n1,int n2);

int main()
{

    int num1,num2;
    printf("Enter two numbers ;\n");
    scanf("%d %d",&num1,&num2);

    calculatesum(num1,num2);
    return 0;
}

int calculatesum (int n1,int n2)
{

    int sum;
    sum=n1+n2;
    printf("sum=%d\n",sum);
}
