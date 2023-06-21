#include "main.h"

/**
 * print_last _digit - print last digit of a number.
 *
 * @n: takes number input
 *
 * Return: lasDigit
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
