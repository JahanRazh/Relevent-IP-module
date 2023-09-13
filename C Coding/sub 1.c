#include <stdio.h.h>
int int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}
 
#include <stdio.h.h>
int main()
{  
	int x;
	for (int i = 0; i < count; ++i)
	{  
		if(x%7==0)           
		{
			goto label1;
		}
		printf("%d\n,x");
	}
	
	label1;
	printf("%d id divided by 7",x );
	return 0;
}

	switch (expression)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }

    #include<stdio.h>
int main()
{


    int num1;
    int num2;
    int operatione,ans;

    printf("enter the 1st num:");
    scanf("%d",&num1);
    printf("enter the 2nd num:");
    scanf("%d",&num2);

    printf("\t operatione\n");
    printf("\taddition for 1\n");
    printf("\tsubcractione for 2\n");
    printf("\tMultiplicatione for 3\n");
    printf("\tdevitione for 4\n");
    printf("\tRemainder for 5\n");

    printf("choise the operatione(Ex:1)");
    scanf("%d",&operatione);

    switch (operatione)
    {
    case 1:
        ans=num1+num2;
        printf("addition:%d\n",ans);

        break;
    case 2:
        ans=num1-num2;
        printf("subtraction:%d\n",ans);
        break;
    case 3:
        ans=num1*num2;
        printf("Multiplication:%d\n",ans);
        break;
    case 4:
        ans=num1/num2;
        printf("divition:%d\n",ans);
        break;
    case 5:
        ans=num1%num2;
        printf("Remainder:%d\n",ans);
        break;

    default:
        break;
    }

}


#include <stdio.h>
int add(int a, int b);                 //declaration of function

int main(){                            // Main function
    int num1,num2,sum;
    printf("Enters two numbers :\n");
    scanf("%d %d",&num1,&num2);

    sum=add(num1,num2);                // function call
    printf("sum=%d",sum);
    return 0;
}

int add(int a,int b)            //funtion declarator(user defined function)
{
    /*start of function definition*/
    int addition;
    addition=a+b;                                       //return statement of function
    return addition;
    /*end of function definition*/
}

#include<stdio.h>
// function with arguments and return value
int calculatesum(int n1,int n2);
int multiplication(int n1,int n2);

int main()
{
    int sum,num1,num2,multi,num3,num4;
    printf("Enter two number :\n");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);

    sum=calculatesum(num1,num2);
    printf("sum=%d\n",sum);


    multi=multiplication(num3,num4);
    printf("multi=%d",multi);
    return 0;


}

int calculatesum (int n1,int n2)
{
    int sum;
    sum=n1+n2;
    return sum;
}

int multiplication (int n1,int n2)
{
    int multi;
    multi=n1*n2;
    return multi;
}


#include<stdio.h>
// function with no arguments and no return value
int calculatesum ();

int main()
{
    calculatesum ();
    return 0;
}

int calculatesum()
{
    int sum,n1,n2;
    printf("Enter two numbers:\n");
    scanf("%d %d",&n1,&n2);

    sum=n1+n2;
    printf("sum=%d\n",sum);
}


#include<stdio.h>
// function with no arguments and return value
int calculatesum();
int main()
{
    int tot;
    tot=calculatesum();
    printf("sum = %d\n",tot);
    return 0;
}

int  calculatesum()
{
    int sum,n1,n2;
    printf("Enter two numbers :\n");
    scanf("%d %d",&n1,&n2);

    sum=n1+n2;
    return sum;
}


#include<stdio.h>
//function with argument and no return value
int calculatesum(int n1,int n2);

int main()
{

    int num1,num2;
    printf("Enter two numbers ;\n");
    scanf("%d %d",&num1,&num2);

    calculatesum(num1,num2);
    return 0;
}

int calculatesum (int n1,int n2)
{

    int sum;
    sum=n1+n2;
    printf("sum=%d\n",sum);
}


#include<stdio.h>
//array
int main()
{

    int numbers[10]={10,20,30,40,50,60,70,80};
    int i;
    printf("array elements \n");
    for (i=0;i<10;i++)
        printf("%d\n",numbers[i]);
    return 0;
}


#include<stdio.h>
//array
int main()
{
    int n=5;
    int numbers[n];

    numbers[0]=2;
    numbers[1]=4;
    numbers[2]=6;
    numbers[3]=8;
    numbers[4]=10;

    int i;
    printf("Array elements \n");
    for(i=0;i<n;i++)
        printf("%d\n",numbers[i]);

    numbers[2]=600;
    printf("Array elements after change \n");
    for(i=0;i<n;i++)
        printf("%d\n",numbers[i]);

    return 0;
}


#include<stdio.h>
int main()
{
	int mod=1,mark,total,stno=1,highest=0;
	while (stno<=3){
		printf("student %d\n ",stno);
		mod=1,total=0;
		while (mod<=4)
		{
			printf("Enter The Mark Module%d:",mod);
			scanf("%d",&mark);
			total=total+mark;
			mod=mod+1;
		}
		printf("\ntotal is %d\n",total);
		stno=stno+1;
		if (total > highest)
		{
			highest=total;
			
		}
	
	
	}
	printf("\nhighest is:%d",highest);
	
	return 0;
}