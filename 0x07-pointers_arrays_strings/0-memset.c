/**
 * _memset - fill arrays
 *
 * @s: parameter s
 * @b: parameter b
 * @n: parameter n
 *
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int count = 0;

	while (count < n)
	{
		*(s + count) = b;
		count++;
	}
	return (s);

}


