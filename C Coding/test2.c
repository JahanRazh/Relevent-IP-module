#include<stdio.h>
int main()
{
    char subject;
    int sub1_mark,sub2_mark,sub3_mark;
    int total;
    int  average;
    int stcount=0;

    for(stcount=0;stcount<6;stcount++);

    {

        printf("enter you A/L subject:");
        scanf("%s",&subject);
        printf("enter the 1 st subject marks:");
        scanf("%d",&sub1_mark);
        printf("enter the 2 nd subject marks:");
        scanf("%d",&sub2_mark);
        printf("enter the 3 rd subject marks:");
        scanf("%d",&sub3_mark);

        if (sub1_mark<=100)
        {
            total+=sub1_mark;

        }
        else
        {
            printf("wrong enter the marks\n");


        }

        if (sub2_mark<=100)
        {
            total+=sub2_mark;

        }
        else
        {
            printf("wrong enter the marks\n");


        }
        if (sub3_mark<=100)
        {
            total+=sub3_mark;

        }
        else
        {
            printf("wrong enter the marks\n");


        }
        average=total/stcount;



    }

    printf("full marks is:%d\n",total);

    printf("average mark is:%d\n",average);


    return 0;
}
