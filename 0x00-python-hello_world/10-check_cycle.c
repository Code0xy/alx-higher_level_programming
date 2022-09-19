#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *head, *linda;

	if (list == NULL || list->next == NULL)
		return (0);

	head = list->next;
	linda = list->next->next;

	while (head && linda && linda->next)
	{
		if (head == linda)
			return (1);

		head =  head->next;
		linda = linda->next->next;
	}

	return (0);
}

