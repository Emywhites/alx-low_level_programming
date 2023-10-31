#include "main.h"

/**
 * char *_strcpy - program copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 *
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;
	int k = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	for ( ; k < j ; k++)
	{
		dest[k] = src[k];
	}
	dest[j] = '\0';
	return (dest);
}
