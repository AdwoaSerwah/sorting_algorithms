#include "sort.h"

/**
 * insertion_sort_list - Sorts doubly linked list with insertion sort algorithm
 * @list: List to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp1 = NULL;

	if (*list == NULL)
		return;
	if ((*list)->next == NULL)
		return;
	tmp1 = (*list)->next;
	while (tmp1 != NULL)
	{
		listint_t *tmp4 = tmp1->next;

		while (tmp1->n < tmp1->prev->n)
		{
			listint_t *tmp2 = tmp1->next, *tmp3 = tmp1->prev;

			tmp1->prev = tmp3->prev;
			tmp1->next = tmp3;
			tmp3->prev = tmp1;
			tmp3->next = tmp2;
			if (tmp2 != NULL)
				tmp2->prev = tmp3;
			if (tmp1->prev == NULL)
			{
				*list = tmp1;
				print_list(*list);
				break;
			}
			tmp1->prev->next = tmp1;
			print_list(*list);
		}
		tmp1 = tmp4;
	}
}
