#include "main.h"

/**
 * _strncat - funstion that combines strings at less than byte of the string
 *
 * @dest: parameter for the destination of the string
 *
 * @src: parameter for the source string
 *
 * @n: parameter for the number of byte
 *
 * Return: always (0) if successful
 */


char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
