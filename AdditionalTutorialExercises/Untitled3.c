#include<stdio.h>
int main()
{

    int distance;
    float charge;
    char input;
    float totalcharge;
    printf("enter the distance :");
    scanf("%d",&distance);

    do
    {
        if (distance<=3)
        {
        charge=50.00;
        printf("distance delivery charge %f",charge);
        }

        else if (3<distance&&distance<=8)
        {
        charge=75.00;
        printf("distance delivery charge %f",charge);
        }

        else if (8<distance&&distance<=15)
        {
        charge=125.00;
        printf("distance delivery charge %f",charge);
        }

        else
        {
        charge=150.00;
        printf("distance delivery charge %f\n",charge);
        }
        totalcharge=+charge;
        printf("do you want enter the delivary details(y/n):");
        scanf("%s",&input);




    }while(input=='y'||input=='Y');
        printf("print total delivery charge:%f",totalcharge);

    return 0;



}

