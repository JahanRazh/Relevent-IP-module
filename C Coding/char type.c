// reading a character and print messages appropriately
#include <stdio.h>
int main(void)
{
    int grade;
    printf("Enter grade :" );
    scanf("%d",&grade);
    grade = getchar(); // read a character
    switch(grade)
    {
        case 'A' : printf( "%s", "Excellent");
                    break;
        case 'B' : printf( "%s", "Good" );
                    break;
        default:
            printf("normal");
    }
return 0;
} // end of main function
