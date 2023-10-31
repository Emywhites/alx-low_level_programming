#include "main.h"

/**
 * _memset - Program fills a block of memory with specific value.
 * @s: The address of memory of to be filled
 * @b: the value
 * @n: the number of bytes to be changed
 *
 * Return: change array with new value for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)

	{
		s[x] = b;
		n--;
	}
	return (s);
}
