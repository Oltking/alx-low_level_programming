#include <stdio.h>

/**
 * main - main function of program
 *
 * __attribute__((__unused__)) - function to bypass value of integer
 *
 * @argc: parameter to count arguments in command line
 * @argv: parameter arguments vector
 *
 * Return: returns (0) if successful
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
