#include<stdio.h>
int main()
{

    int javapro=1500;
    int webdesigning=1000;
    int computernetwork=2000;
    int num=1,total;
    int prono;
    while (num<=4)
        {
            printf("enter the program number:");
            scanf("%d",&prono);
            if (prono==-99)
                break;
            switch(prono)
            {
            case 1:
                {
                 total=total+javapro;
                 break;
                }
            case 2:
                {
                    total=total+webdesigning;
                    break;
                }
            case 3:
                {
                    total=total+computernetwork;
                    break;
                }
            default:
                {
                    printf("invalide pro no entered\n");
                    continue;

                }
            }

            num+=1;

        }
         printf("total is %d",total);
         return 0;
}
