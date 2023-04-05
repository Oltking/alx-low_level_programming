#include "main.h"

/**
 * _strlen_recursion - function to return the length of a string
 *
 * @s: parameter pointer for char
 *
 * Return: return 0 or recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen_recursion(++s));
}
