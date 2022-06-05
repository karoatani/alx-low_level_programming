#include <stdio.h>
/**
 * main - Entry point of the function
 * Description - prints letter a-z excluding
 * q and i
 * return - Always return 0
 */

int main()
{
    char i;

  for(i='a'; i <'z';i++)
        if (i != 'q' && i != 'e')
            putchar(i);

    return (0);
}
