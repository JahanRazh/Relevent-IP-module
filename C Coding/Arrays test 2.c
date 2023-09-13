#include<stdio.h>
//array
int main()
{
    int n=5;
    int numbers[n];

    numbers[0]=2;
    numbers[1]=4;
    numbers[2]=6;
    numbers[3]=8;
    numbers[4]=10;

    int i;
    printf("Array elements \n");
    for(i=0;i<n;i++)
        printf("%d\n",numbers[i]);

    numbers[2]=600;
    printf("Array elements after change \n");
    for(i=0;i<n;i++)
        printf("%d\n",numbers[i]);
    return 0;
}
