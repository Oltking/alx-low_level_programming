#include "main.h"

/**
 * int_isupper(int c) - function to check letter case
 *
 * @c: parameter for alpbabet
 *
 * Return: return 1 if letter is in upper case and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
