#include<stdio.h>
struct book
{
    char name[25];
    float price;
    int pages;
};

int main()
{
    struct book b1={"apple",210.50,170};
    struct book b2={"Black",590.00,98};
    struct book b3={"Fairy",1050.00,476};

    printf("name of b1 = %s\n",b1.name);
    printf("price of b1 =%.2f\n",b1.price);
    printf("pages of b1 =%d\n\n",b1.pages);

    printf("name of b2 = %s\n",b2.name);
    printf("price of b2 = %.2f\n",b2.price);
    printf("pages of b2 = %d\n\n",b2.pages);

    return 0;

}
