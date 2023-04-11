#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function of program
 *
 * @argc: param for arguments count
 * @argv: param for arguments vector
 *
 * Return: return (0) if successful
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)

		printf("%s\n", argv[arg]);

	return (0);
}
