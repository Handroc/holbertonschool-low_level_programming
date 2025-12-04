#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 *
 * Return: pointer to the nth node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	if (index == 0)
		node = head;
	if (head)
	{
		while (i < index)
		{
			if (head->next)
			{
				node = head->next;
				head = node;
			}
			else
			{
				return (NULL);
			}
			i++;
		}
	}
	else
	{
		return (NULL);
	}

	return (node);
}
