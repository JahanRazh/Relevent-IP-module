#include<stdio.h>

const int length =10;
const int width =5;

int main()
{
    int area;

    area =length * width;
    printf("value of area : %d\n",area);

    //length=length+10; this is constrain you can't change or equal
    //length=200;
    printf("value of length :%d\n",length);

    return 0;



}

