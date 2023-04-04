#include "main.h"

/**
 * _memset - function to fill the memory area with the memory
 *
 * @s: parameter pointer to memory
 * @b: parameter pointer to value
 * @n: parameter for the amount of byte
 *
 * Return: returns memory s if successful
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
