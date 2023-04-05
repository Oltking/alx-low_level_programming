#include "main.h"

/**
 * _puts_recursion - function that print strings
 *
 * @s: parameter pointer to char
 *
 * Return: none to return
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
