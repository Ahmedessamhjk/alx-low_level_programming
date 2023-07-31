#include "lists.h"

/**
 * print_listin - prints all elements of a listint_t list
 * @h: linked list of type listint_t to print
 *
 * Return: size of list
*/

size_t print_listint(const listint_t *h)
{
	size_t ai = 0;

	while (h)
	{
		ai++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (ai);
}
