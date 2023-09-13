#include<stdio.h>
int main()
{
    int n=198;

    printf("value of variable n: %d\n",n);
    printf("Address of variable n: %p\n",&n);


    int *ptn;
    ptn =&n;    //int *ptn=&n;

    printf("\n\n ");
    printf("Value of variable n: %d\n",*ptn);
    printf("Address of variablee n: %p\n",ptn);

    return 0;
}
