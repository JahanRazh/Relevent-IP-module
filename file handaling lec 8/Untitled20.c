#include<stdio.h>
int main(void)
{
char ID[10];
char name[30];
double avgMarks;
int i;
FILE *cfPtr;
cfPtr = fopen("marks.text", "w");
if (cfPtr == NULL)
{
    printf("File cannot be open\n");
    //return -1;
}
for(i = 1; i <= 5; ++i)
{
    printf("Pls input the student ID:");
    scanf("%s",&ID);
    printf("Pls input the name:");
    scanf("%s",&name);
    printf("Pls input the average Marks:");
    scanf("%lf",&avgMarks);
    fprintf(cfPtr, "%s %s %.2lf\n", ID, name, avgMarks);
}
fclose(cfPtr);
return 0;
}
