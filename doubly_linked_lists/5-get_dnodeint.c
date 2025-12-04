#include "lists.h"

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
