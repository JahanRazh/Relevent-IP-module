#include<stdio.h>
//
int main(void)
{
    int num,choise;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("enter the your choise:(1,2,3)");
    scanf("%d",&choise);
    switch(choise)
    {
    case 1:
        num=num+2;
        printf("number is:%d",num);
        break;
    case 2:
        num=num*2;
        printf("number is:%d",num);
        break;
    case 3:
        num=num/2;
        printf("number is :%d",num);
        break;

    default:
        printf("invalied your choise:");



    }
    return 0;
}
