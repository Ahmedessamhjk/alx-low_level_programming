#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number
 *
 * Return: the unsigned int of b
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int a;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		sum = sum * 2 + (b[a] - '0');
	}

	return (sum);
}
