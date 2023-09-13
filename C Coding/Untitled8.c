#include<stdio.h>
struct group
{
int groupNo;
int studentcount;
}group1, group2;

int main(void)
{
  group1.studentcount=115;
  group2.studentcount=123;
  printf("group1 count is %d\n",group1.studentcount);
  printf("group2 count is %d",group2.studentcount);

return 0;
}
