#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to check it's length
 *
 * Return: integer length of string
*/
int _strlen(char *s)
{
	int a = 0;

	if (!s)
		return (0);
	while (*s++)
		a++;
	return (a);
}

/**
 * print_list - prints linked lists
 * @h: pointer to first node
 *
 * Return: size of list
*/

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		a++;
	}
	return (a);
}
