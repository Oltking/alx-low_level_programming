#include "main.h"

/**
 * _strcat - function to combine strings
 *
 * @dest: parameter destination for string
 *
 * @src: parameter append source
 *
 * Return: always (0) if successful
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];
	return (dest);

}
