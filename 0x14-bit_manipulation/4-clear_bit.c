#include "main.h"

/**
 * clear_bit - clears the bit at a given index
 * @n: index number
 * @index: bit number
 *
 * Return: 1 on success, -1 on failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
