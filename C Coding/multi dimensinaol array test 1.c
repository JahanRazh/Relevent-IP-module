#include<stdio.h>
int main()
{
    int numbers[3][4]={{21,6,32,87},{1,79,2,4},{8,90,0,1}};
    int i,j;
    printf("Array Elements\n");
    for(i=0;i<3;i++)
    {
        printf("--------------------------\n");
        for(j=0;j<4;j++)
        {
            printf("%d\n",numbers[i][j]);

        }

    }
    return 0;
}
