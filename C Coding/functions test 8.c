#include<stdio.h>
// function with no arguments and no return value
int calculatesum ();

int main()
{
    calculatesum ();
    return 0;
}

int calculatesum()
{
    int sum,n1,n2;
    printf("Enter two numbers:\n");
    scanf("%d %d",&n1,&n2);

    sum=n1+n2;
    printf("sum=%d\n",sum);
}
