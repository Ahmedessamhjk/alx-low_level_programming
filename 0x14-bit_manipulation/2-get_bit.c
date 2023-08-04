#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the index number
 * @index: the bit
 *
 * Return: the value of the bait at index or -1 on error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
