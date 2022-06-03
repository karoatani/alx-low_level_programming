#include <stdio.h>

/**
 * main - Entry point
<<<<<<< HEAD
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;
	
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
=======
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	 int a;
	 long int b;
	 long long int c;
	 char d;
	 float f;

	 printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	 printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	 printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	 printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	 printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
>>>>>>> bff4bad16233cd69bf5489f3e0668957927e867f
	return (0);
}
