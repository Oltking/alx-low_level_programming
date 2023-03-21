 #include "main.h"

/**
 * print_sign - function that prints signs
 *
 * @n: parameter function
 *
 * Return: 1, 0 and -1 for each successful condition
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
