#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a list
 * @head: first node in the list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tp = head;

	while (tp)
	{
		sum += tp->n;
		tp = tp->next;
	}

	return (sum);
}
