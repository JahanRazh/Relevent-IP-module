#include<stdio.h>
int main ()
{

        int n=5; //local veriabel

        {
            int n=10;//local veriabel
            printf("value of n (inner) : %d\n",n);
        }

        printf("value of n (outer) : %d\n",n);
        return 0;
}
