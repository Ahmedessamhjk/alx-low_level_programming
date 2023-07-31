#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer of the first node
 *
 * Return: size of list
*/

size_t print_listint(const listint_t *h)
{
	size_t l = 0;

	while (h)
	{
		printf("%d\n", h->n);
		l++;
		h = h->next;
	}
	return (l);
}
