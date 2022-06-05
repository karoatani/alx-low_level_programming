#include <stdio.h>
/**
 * main - Entry point of the function
 * Description - prints charter 0-9
 * return - Always return 0
 */
int main ()
{
    int i;
    for(i=0; i < 10; i++)
        putchar((i%10)+ '0');
    return (0);
}
