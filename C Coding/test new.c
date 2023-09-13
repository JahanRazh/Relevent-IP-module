#include<stdio.h>
int main()
{
    int num,sum;
    int n=1;
    printf("Enter the 10 numbers:\n");
    while (10>=n)
    {

    printf("Enter the num %d:",n);
    scanf("%d",&num);

    sum=sum+num;
    n=n+1;

    }
    printf("10 numbers sum :%d",sum);
    return 0;




}
