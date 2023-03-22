#include "main.h"

/**
 * print_last_digit - prints last digit of the value
 *
 * @i: parameter to print value
 *
 * Return: returns k
 */

int print_last_digit(int i)
{
	int k;

	(k = i % 10);
	if (i < 0)
		k = -(k);
	_putchar(k + '0');
	return (k);
}
