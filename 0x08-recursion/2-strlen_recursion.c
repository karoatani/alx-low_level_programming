#include "main.h"
/**
 * _strlen_recursion - count string
 *
 * @s: parameter s
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
    static int count;
    if (*(s + count) != '\0'){
        count++;
        _strlen_recursion(s);
    }
    return count;
}