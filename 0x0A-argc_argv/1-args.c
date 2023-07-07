#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: number of command line arguments.
 * @argv: pointer to an array of command line arguments.
 * Return: 0 on success, non-zero-fail.
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
