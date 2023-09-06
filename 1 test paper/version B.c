#include<stdio.h>
int main()
{
    int option;
    int guests;
    int days;
    char tours;
    float price,chargegust;

    printf("Input room option:");
    //option=getchar();
	scanf("%d",&option);
if (option<=3)
	{
		printf("Number of guests:");
    	scanf("%d",&guests);

    	printf("Number of Days:");
    	scanf("%d",&days);	
    	switch(option)
    	{
    	case 1:
        	{
         	if (guests<=2)
        	{
            	price=guests*days*45000;
            	break;
        	}
        	else if (guests>=5)
        	{
            	price=guests*days*44000;
            	break;
        	}
        	else
        	{
            	price=guests*days*43000;
            	break;
        	}
        	}


    	case 2:
        	{
         	if (guests<=2)
        	{
            	price=guests*days*40000;
            	break;
        	}
        	else if (guests>=5)
        	{
            	price=guests*days*38000;
            	break;
        	}
        	else
        	{
            	price=guests*days*35000;
            	break;
        	}
        	}

    	case 3:
        	{
        	if (guests<=2)
        	{
            	price=guests*days*37500;
            	break;
        	}
        	else if (guests>=5)
        	{
            	price=guests*days*35000;
            	break;
       		}
        	else
       		{
            	price=guests*days*32000;
            	break;
        	}
    		}
    	default:
        	{
            	printf("Invalid option Entered:\n");
        	}
       	}	
	
    	printf("Do you need any additional tours(y/n):");
    	scanf(" %c",&tours);
	
		

    	while (tours)
      	{
        	if (tours=='y'||tours=='Y')
        	{
            	int option;
            	printf("Enter your option:");
            	scanf("%d",&option);
            	switch(option)
            	{
                	case 1:
                    	{
                        	chargegust=3500*guests;
                        	price=price+chargegust;
                        	break;
                    	}
                	case 2:
                     	{
                        	chargegust=1000*guests;
                        	price=price+chargegust;
                        	break;
                    	}
                	case 3:
                    	{
                        	chargegust=1500*guests;
                        	price=price+chargegust;
                        	break;
                    	}
                	case 4:
                    	{
                        	chargegust=2000*guests;
                        	price=price+chargegust;
                        	break;
                    	}
                	default:
                    	{
                        	printf("Invalid option Entered:\n");
                        	break;
                    	}	
            	}
            
			printf("Do you need any additional tours(y/n):");
        	scanf(" %c",&tours);	
        	}
			else if(tours=='n'||tours=='N')
    		{
    			printf("your total is %.2f",price);
    			break;	
			}	
    			
    		
		}
	}
	else
	{
		printf("Entered an Invalid option:");    
	}

	return 0;
}









