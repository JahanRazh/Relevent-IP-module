#include<stdio.h>
int main()
{
    int numbers[2][3];

    numbers[0][0]=500;
    numbers[0][1]=50;
    numbers[0][2]=5;
    numbers[1][0]=-900;
    numbers[1][1]=-90;
    numbers[1][2]=-9;

    int i,j;
    printf("Array Elements\n");
    for(i=0;i<2;i++)
    {
        printf("------------------------\n");
        for (j=0;j<3;j++)
        {
            printf("%d\n",numbers[i][j]);
        }
    }
    return 0;

}
