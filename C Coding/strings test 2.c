#include<stdio.h>
int main()
{
    char name[50]={'k','p',' ','c','o','d','i','n','g'};

    printf("welcome all to %s",name);

    printf("\n---------------------\n");

    printf("character in the string\n");
    int i;
    for (i=0;name[i] !='\0';i++)
    {
        printf("name[%d] = %c\n",i,name[i]);
    }
    return 0;
}
