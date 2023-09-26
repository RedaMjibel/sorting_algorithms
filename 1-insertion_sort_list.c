#include "sort.h"

/**
 * node_swap - swaps 2 nodes in a doubly_linkedlist
 * @a: adress of the first node
 * @b: adress of the second node
 *
 * Return: nothing
 */
void node_swap(listint_t *a, listint_t *b)
{
	if (a->prev != NULL)
		a->prev->next = b;
	if (b->next != NULL)
		b->next->prev = a;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}

/**
 * insertion_sort - sorts a doubly linked list of integers
 * @list: adress of a pointer to the head node
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	i = (*list)->next;
	while (i)
	{
		j = i;
		i = i->next;
		while (j && j->prev)
		{
			if (j->prev->n > j->n)
			{
				node_swap(j->prev, j);
				if (j->prev == NULL)
					*list = j;
				print_list((const listint_t *)*list);
			}
			else
				j = j->prev;
		}
	}
}
