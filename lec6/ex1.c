#include<stdio.h>

char pattern(int line_no,char chara);

int main()
{
    int line=5;
    char character;
    printf("Enter the no of line:");
    scanf("%d",&line);
    printf("Enter the charcter:");
    scanf("%c",&character);

    pattern(line,character);

}

char pattern(int line_no,char chara)
{
    int i,j;

    for (i=1;i<=line_no;i++)
    {
        for (j=1;j<=line_no;j++)
        {
            printf("%c",chara);
        }
    }

}
