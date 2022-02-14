#include "sort.h"

/**
 * swap - Swap nodes on list.
 * @list: pointer to head of list.
 * @current: pointer to current node of list.
 * @previous: pointer to previous node of list.
 */
void swap(listint_t **list, listint_t *current, listint_t *previous)
{
	listint_t *temp1 = NULL, *temp2 = NULL;

	if (!current || !previous)
		return;

	if (!previous->prev)
	{
		temp2 = current->next;

		temp2->prev = previous;
		previous->next = temp2;
		previous->prev = current;
		current->next = previous;
		current->prev = NULL;
		(*list) = current;
	}
	if (current->next && current->prev)
	{
		temp1 = previous->prev;
		temp2 = current->next;

		previous->next = temp2;
		previous->prev = current;
		current->next = previous;
		current->prev = temp1;
		temp1->next = current;
		temp2->prev = previous;
	}
	if (!current->next)
	{
		temp1 = previous->prev;

		previous->next = NULL;
		previous->prev = current;
		current->next = previous;
		current->prev = temp1;
		temp1->next = current;
	}
}

/**
 * insertion_sort_list - Sort a list with insertion sort algorithm.
 * @list: list of integers
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *previous = NULL;

	if (!list || !(*list))
		return;

	current = (*list)->next;
	while (current && current->next)
	{
		while (current)
		{
			if (current->n < current->prev->n)
			{
				previous = current->prev;
				swap(list, current, previous);
				print_list(*list);
				if (!current->prev)
					current = current->next;
				break;
			}
			current = current->next;
		}
	}
}
