#include <stdio.h>
/**
 * main - Entry point of the function
 * Description - prints letter a-z and A-z
 * return - Always return 0
 */
int main (){
    char i;

    for(i='a'; i <'z';i++)
        putchar(i);

    for(i='A'; i <'Z';i++)
        putchar(i);
    putchar('\n');
    return (0);
}
