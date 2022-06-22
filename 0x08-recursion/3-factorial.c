#include "main.h"
/**
 * factorial - find factorial
 *
 * @n: parameter s
 *
 * Return: factorial
 */
int factorial(int n)
{
    if ( n < 0)
        return -1;

    else if (n == 1)
        return 1;
    
    else
      return  n * factorial(n-1);
}

