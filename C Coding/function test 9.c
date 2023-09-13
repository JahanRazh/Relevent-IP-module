#include<stdio.h>
// function with no arguments and return value
int calculatesum();
int main()
{
    int tot;
    tot=calculatesum();
    printf("sum = %d\n",tot);
    return 0;
}

int  calculatesum()
{
    int sum,n1,n2;
    printf("Enter two numbers :\n");
    scanf("%d %d",&n1,&n2);

    sum=n1+n2;
    return sum;
}
