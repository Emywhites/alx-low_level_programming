#include "main.h"

/**
 * factorial - Calculate the factorial of a given number.
 * @n: number for which factorial is to be calculated.
 *
 * Return: integer value.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
