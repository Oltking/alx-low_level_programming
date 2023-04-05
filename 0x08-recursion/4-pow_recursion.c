#include "main.h"

/**
 * _pow_recursion - function to return the value raised to power
 *
 * @x: parameter for value to be raised
 * @y: parameter power value
 *
 * Return: recursion output
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
