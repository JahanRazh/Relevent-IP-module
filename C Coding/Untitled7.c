#include<stdio.h>
int main(void)
{
    float interest = 0.0;
    float bal = 10000.00;
    char type = 'F';
    if (type == 'F')
    {
    interest = bal * 0.25;
    }
    bal = bal + interest + bal * 0.1;
    printf("%.2f\n", bal);


return 0;
}

