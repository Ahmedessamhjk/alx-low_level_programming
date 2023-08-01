#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer of the first node
 * @n: value for new node
 *
 * Return: pointer to new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n1 = malloc(sizeof(listint_t));

	listint_t *n2

	if (!head || !n1)
		return (NULL);

	n1->next = NULL;
	n1->n = n;
	if (!*head)
	{
		*head = n1;
	}
	else
	{
		n2 = *head;
		while (n2->next)
			n2 = node->next;
		n2->next = n1;
	}
	return (n1);
}
