#include<stdio.h>
struct book
    {
        char name[25];
        float price=10.23;
        int pages;
    };

int main()
{
    struct book b1 = {"Apple",210.50,170};
    struct book b2 = {"Black",590.00,98};
    struct book b3 = {"Fairy",1050.00,476};

}
