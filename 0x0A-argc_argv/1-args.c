#include <stdio.h>

/**
 * main - main function in a program
 *
 * @argc: parameter to count arguments
 * @argv: parameter vector of arguments in command line
 *
 * Return: return (0) if successful
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
