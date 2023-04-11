#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function of program
 *
 * @argc: param arguments count
 * @argv: param arguments vector
 *
 * Return: return 0, 1 based of success
 */

int main(int argc, char *argv[])
{
	int number, digit, sum = 0;

	for (number = 1; number < argc; number++)
	{
		for (digit = 0; argv[number][digit]; digit++)
		{
			if (argv[number][digit] < '0' || argv[number][digit] > '9')
			{
				printf("Ereor\n");
				return (1);
			}
		}
		sum += atoi(argv[number]);
	}
	printf("%d\n", sum);
	return (0);
}
