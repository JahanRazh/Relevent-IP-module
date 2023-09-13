#include<stdio.h>
int main()
{


    int num1;
    int num2;
    int operatione,ans;

    printf("enter the 1st num:");
    scanf("%d",&num1);
    printf("enter the 2nd num:");
    scanf("%d",&num2);

    printf("\t operatione\n");
    printf("\taddition for 1\n");
    printf("\tsubcractione for 2\n");
    printf("\tMultiplicatione for 3\n");
    printf("\tdevitione for 4\n");
    printf("\tRemainder for 5\n");

    printf("choise the operatione(Ex:1)");
    scanf("%d",&operatione);

    switch (operatione)
    {
    case 1:
        ans=num1+num2;
        printf("addition:%d\n",ans);

        break;
    case 2:
        ans=num1-num2;
        printf("subtraction:%d\n",ans);
        break;
    case 3:
        ans=num1*num2;
        printf("Multiplication:%d\n",ans);
        break;
    case 4:
        ans=num1/num2;
        printf("divition:%d\n",ans);
        break;
    case 5:
        ans=num1%num2;
        printf("Remainder:%d\n",ans);
        break;

    default:
        break;
    }

}
