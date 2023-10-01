#include<stdio.h>
int main()
{
	char course_type;
	int no_of_st,no_of_st_H=0,no_of_st_M,no_of_st_F;
	float refee,totrefee_H,totrefee_M=0,totrefee_F;
	
	while(no_of_st<10)
	{
		printf("Enter the type of course:");
		scanf(" %c",&course_type);
		if(course_type=='H' || course_type=='h')
		{
			refee=1500.00;
			no_of_st_H=no_of_st_H+1;
			totrefee_H=totrefee_H+refee*no_of_st_H;
			no_of_st+=1;
		}
		else if(course_type=='M' || course_type=='m')
		{
			refee=2000.00;
			no_of_st_M=no_of_st_M+1;
			totrefee_M=totrefee_M+refee*no_of_st_M;
			no_of_st+=1;
		}					
		else if(course_type=='F' || course_type=='f')
		{
			refee=2500.00;
			no_of_st_F=no_of_st_F+1;
			totrefee_F=totrefee_F+refee*no_of_st_F;
			no_of_st+=1; 
		}
				
		else
		{
			printf("you entered invalid type of course:\n");
			
		}
					
		
	}
	printf("No of student registered HM:%d\n",no_of_st_H);
	printf("total registration fee earned from HM:%f\n",totrefee_H);
	
	printf("No of student registered M:%d\n",no_of_st_M);
	printf("total registration fee earned from M:%f\n",totrefee_M);
	
	printf("No of student registered F:%d\n",no_of_st_F);
	printf("total registration fee earned from M:%f",totrefee_F);
		
	return 0;
}
