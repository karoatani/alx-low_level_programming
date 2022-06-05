#include <stdio.h>
/**
 * main - Entry point of the program
 * Description - Loops through 0-9 and add some 
 * conditions
 * return - Always return 0
 */
int main ()
{
    int i;
    for(i=0; i <= 9; i++){
        putchar((i%10) + '0');
        if(i == 9)
               break;
        putchar(',');
        putchar(' ');
    }
    return (0);
}
