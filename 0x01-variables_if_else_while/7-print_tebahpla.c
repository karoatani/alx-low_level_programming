#include <stdio.h>
/**
 * main - Entry point of the function
 * Description - reverse print a-z
 * return - Always return 0
 */
int main ()
{
    int i;
    for (i = 'z'; i >= 'a'; i--)
        putchar(i);
    return (0);
}
