# include <stdio.h>
int main(void)
{
	int x = 1;
	while ( x <= 10)
	{
		if ( x == 5) {
			//break;
			++x;
			continue;
		}
		printf(" %d", x);
		++ x;
	}
	printf("\nfuck");
	return 0; // end while
} //end function main
