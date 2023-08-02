#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: number for which factorial is to be calculated.
 *
 * Return: factoral of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
