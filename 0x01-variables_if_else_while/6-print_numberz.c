#include <stdio.h>

/**
 * main - Entry piont
 *
 * Description: print 0-9 using putchar
 *		while using int variable
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digits to ASCII representation*/
		putchar(digit + '0');
		digit++;
	}
	putchr(\n);

	return (0);
}
