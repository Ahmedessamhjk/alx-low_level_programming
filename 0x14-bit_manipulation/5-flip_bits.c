#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int c = 0;

	while (xor)
	{
		if (xor & 1ul)
			c++;
		xor = xor >> 1;
	}
	return (c);
}
