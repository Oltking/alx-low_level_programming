#include "main.h"

/**
 * swap_int - function to swap two integers
 *
 * @a: parameter value a
 *
 * @b: parameter value b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
