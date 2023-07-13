#include "main.h"

/**
 * *malloc_checked - allocates memory usuing malloc and exit if failed
 * @*b: int
 * Return: Returns a pointer to the allocated memory or NULL*/

void *malloc_checked(unsigned int b)
{
	int *s = malloc(b);

	while (*s == 0)
		exit(98);
	
	return (*s);
}
