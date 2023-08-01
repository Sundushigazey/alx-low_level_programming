#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to the first element
 *
 * Return: the data deleted,or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tp;
	int nu;

	if (!head || !*head)
		return (0);

	nu = (*head)->n;
	tp = (*head)->next;
	free(*head);
	*head = tp;

	return (nu);
}
