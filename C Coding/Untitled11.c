#include<stdio.h>
int main()
{
int i=0;
int size;
//char name[50] = "kpcoding"; //declaration of array
char name[] = {'k','p',' ','c','o','d','i','n','g'};
//initialization of array  
size=sizeof(name);
printf("size of array:%d\n",size);
//traversal of array
for(i=0;name[i]!='\0';i++){
    printf("%c",name[i]);
}//end of for loop

return 0;

}
