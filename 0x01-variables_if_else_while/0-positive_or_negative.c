#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Main function checks whether a value is negative
* positive or zero
* arg(n)
*
* Description - Functions that checks number for either a negative
* positive or a zero and prints out the desired output
* through the if-else conditions
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
