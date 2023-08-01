#include "lists.h"

/**
 * print_listint - prints the elements of a linked list
 * @h: linked list to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nu = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nu++;
		h = h->next;
	}

	return (nu);
}
