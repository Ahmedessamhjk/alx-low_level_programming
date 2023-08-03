#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 *
 * Return: void
*/
void print_binary(unsigned long int n)
{
	int a = sizeof(n) * 8, c = 0;

	while (a)
	{
		if (n & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
