#include<stdio.h>
int main()
{

    int javapro=1500;
    int webdesigning=1000;
    int computernetwork=2000;
    int num=1,total;
    int prono;
    while (num<=100||num!=-99)
        {
            printf("enter the program number:");
            scanf("%d",&prono);
            if (prono==1)
                total=+javapro;
            else if (prono==2)
                total=+webdesigning;
            else if (prono==3)
                total=+computernetwork;

            num=+1;

            if (num>100)
                break;



        }
        printf("total is :",total);
}
