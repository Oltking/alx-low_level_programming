#include <stdio.h>
#include <stdlib.h>

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
	int sum;

	for (sum = 0; sum < argc; sum++)
	{
		*argv[sum] = *argv[sum];
	}
	printf("%d\n", (sum - 1));
	return (0);

}
