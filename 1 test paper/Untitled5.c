#include<stdio.h>
int main()
{

int roomtype,day;
char accbasis,reward;
float Amount,total;
float discount;

while (roomtype <=3)
     {
        printf("Enter the room type:");
        scanf("%d",&roomtype);
        if (roomtype==-1)

            break;
        else
        {
        printf("Enter Accommodation Basis (F/H):");
        scanf(" %c",&accbasis);

        printf("enter the no of days:");
        scanf("%d",&day);

        printf("Enter Reward Card Type ( G, S, B ) : ");
        scanf(" %c",&reward);


        }
        switch(roomtype)
        {
            case 1:
            {
                if (accbasis=='F'||accbasis=='f'&&reward=='G'||reward=='g')
                {
                    discount=12.5/100;
                    Amount=25555.00-(25555.00*discount);
                    total=Amount*day;
                    printf("Amount is (RS):%.2f\n",total);
                    break;


                }
                else if (accbasis=='F'||accbasis=='f'&&reward=='S'||reward=='s')
                {
                    discount=11.5/100;
                    Amount=25555.00-(25555.00*discount);
                    total=Amount*day;
                    printf("Amount is (RS):%.2f\n",total);
                    break;

                }
                else if (accbasis=='F'||accbasis=='f'&&reward=='B'||reward=='b')
                {
                    discount=9.5/100;
                    Amount=25555.00-(25555.00*discount);
                    total=Amount*day;
                    printf("Amount is (RS):%.2f\n",total);
                    break;


                }

                else if(accbasis=='H'||accbasis=='h'&&reward=='G'||reward=='g')
                {
                    discount=12.5/100;
                    Amount=25555.00-(25555.00*discount);
                    total=Amount*day;
                    printf("Amount is (RS):%.2f\n",total);
                    break;
                }

                else if(accbasis=='H'||accbasis=='h'&&reward=='S'||reward=='s')
                {
                    discount=11.5/100;
                    Amount=25555.00-(25555.00*discount);
                    total=Amount*day;
                    printf("Amount is (RS):%.2f\n",total);
                    break;
                }

                else (accbasis=='H'||accbasis=='h'&&reward=='B'||reward=='b');
                {
                    discount=9.5/100;
                    Amount=25555.00-(25555.00*discount);
                    total=Amount*day;
                    printf("Amount is (RS):%.2f\n",total);
                    break;
                }

            }
            case 2:
            {
                if (accbasis=='F'||accbasis=='f'&&reward=='G'||reward=='g')
                {
                    discount=12.5/100;
                    Amount=17500.00-(17500.00*discount);
                    total=Amount*day;
                    printf("Amount is (RS):%.2f\n",total);
                    break;


                }
                else if (accbasis=='F'||accbasis=='f'&&reward=='S'||reward=='s')
                {
                    discount=11.5/100;
                    Amount=17500.00-(17500.00*discount);
                    total=Amount*day;
                    printf("Amount is (RS):%.2f\n",total);
                    break;

                }
                else if (accbasis=='F'||accbasis=='f'&&reward=='B'||reward=='b')
                {
                    discount=9.5/100;
                    Amount=17250.00-(17250.00*discount);
                    total=Amount*day;
                    printf("Amount is (RS):%.2f\n",total);
                    break;


                }

                else if(accbasis=='H'||accbasis=='h'&&reward=='G'||reward=='g')
                {
                    discount=12.5/100;
                    Amount=12250.00-(12250.00*discount);
                    total=Amount*day;
                    printf("Amount is (RS):%.2f\n",total);
                    break;
                }

                else if(accbasis=='H'||accbasis=='h'&&reward=='S'||reward=='s')
                {
                    discount=11.5/100;
                    Amount=12250.00-(12250.00*discount);
                    total=Amount*day;
                    printf("Amount is (RS):%.2f\n",total);
                    break;
                }

                else (accbasis=='H'||accbasis=='h'&&reward=='B'||reward=='b');
                {
                    discount=9.5/100;
                    Amount=12250.00-(12250.00*discount);
                    total=Amount*day;
                    printf("Amount is (RS):%.2f\n",total);
                    break;
                }
        	}
            case 3:
            {
                if (accbasis=='F'||accbasis=='f'&&reward=='G'||reward=='g')
                {
                    discount=12.5/100;
                    Amount=9000.00-(9000.00*discount);
                    total=Amount*day;
                    printf("Amount is (RS):%.2f\n",total);
                    break;


                }
                else if (accbasis=='F'||accbasis=='f'&&reward=='S'||reward=='s')
                {
                    discount=11.5/100;
                    Amount=9000.00-(9000.00*discount);
                    total=Amount*day;
                    printf("Amount is (RS):%.2f\n",total);
                    break;

                }
                else if (accbasis=='F'||accbasis=='f'&&reward=='B'||reward=='b')
                {
                    discount=9.5/100;
                    Amount=9000.00-(9000.00*discount);
                    total=Amount*day;
                    printf("Amount is (RS):%.2f\n",total);
                    break;


                }

                else if(accbasis=='H'||accbasis=='h'&&reward=='G'||reward=='g')
                {
                    discount=12.5/100;
                    Amount=7250.00-(7250.00*discount);
                    total=Amount*day;
                    printf("Amount is (RS):%.2f\n",total);
                    break;
                }

                else if(accbasis=='H'||accbasis=='h'&&reward=='S'||reward=='s')
                {
                    discount=11.5/100;
                    Amount=7250.00-(7250.00*discount);
                    total=Amount*day;
                    printf("Amount is (RS):%.2f\n",total);
                    break;
                }

                else (accbasis=='H'||accbasis=='h'&&reward=='B'||reward=='b');
                {
                    discount=9.5/100;
                    Amount=7250.00-(7250.00*discount);
                    total=Amount*day;
                    printf("Amount is (RS):%.2f\n",total);
                    break;
                }
			}
			default:
                {
                    printf("Invalid Type of room\n");
                }

		}

	}
	return 0;
}
