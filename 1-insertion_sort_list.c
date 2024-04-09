#include "sort.h"

/**
 * insertion_sort_list- 
 *
 * @list:
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *prev;

	if (!list || !*list)
		return;

	current = (*list);
	while ((current = current->next))
	{
		temp = current;
		while (temp->prev && temp->n < temp->prev->n)
		{
			prev = temp->prev;
			if (temp->next)
				temp->next->prev = prev;
			if (prev->prev)
				prev->prev->next = temp;
			else
				*list = temp;
			prev->next = temp->next;
			temp->prev = prev->prev;
			temp->next = prev;
			prev->prev = temp;

			print_list(*list);
		}
	}
}
