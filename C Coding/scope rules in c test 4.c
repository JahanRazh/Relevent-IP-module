#include<stdio.h>

int n=70;//Global veriable

int main()
{
    printf("value of n (before):%d\n",n);

    int n=50;//local veriabel this scope
    printf("value of n (after):%d",n);

    return 0;
}
