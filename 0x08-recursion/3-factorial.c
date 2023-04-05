#include "main.h"

/**
 * factorial - function that returns the factorial of a number
 *
 * @n: parameter for number value
 *
 * Return: return recursions
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
