#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept);
{
	unsigned int m, t;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (t = 0; accept[t] != s[m]; t++)
		{
			if (accept[t] == '\0')
				return(m);
		}
	}
	return (m);
}
