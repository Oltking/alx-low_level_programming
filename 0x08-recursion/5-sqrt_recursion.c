#include "main.h"

/**
 * _sqrt_recursion - function to return natural square root of a number
 *
 * @n: param for number value
 *
 * Return: return integer value
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}



int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	else if ((i * i) > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
