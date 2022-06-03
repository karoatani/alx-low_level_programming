#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* Main - Main function checks whether a value is negative
* positive or zero
*
* arg(n) 
*/

int main ()
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n",n);
	else if (n==0)
		printf("%d is zero\n",n);
	else
		printf("%d is negative\n",n);
	return (0);
}
