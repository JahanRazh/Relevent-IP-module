#include<stdio.h>
int main()
{
    int numbers[3][2][4]=
                {
                    {{1,2,3,3},{2,7,-9,2}},
                    {{9,6,5,4},{1,2,4,-2}},
                    {{8,3,3,0},{1,2,4,-2}}

                };
    int i,j,k;
    printf("Array Elements\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("-------------------\n");
            for (k=0;k<4;k++)
            {
                printf("%d\n",numbers[i][j][k]);
            }
        }
    }
    return 0;




}
