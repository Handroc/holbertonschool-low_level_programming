#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (*head)
	{
		tmp = *head;
		if (index == 0)
		{
			*head = tmp->next;
			free(tmp);
			return (1);
		}
		while (i < index)
		{
			if (tmp->next)
				tmp = tmp->next;
			else
				return (-1);
			i++;
		}
		tmp->prev->next = tmp->next;
		if (tmp->next)
		{
			tmp->next->prev = tmp->prev;
			return (1);
		}
		free(tmp);
		return (1);
	}
	else
	{
		return (-1);
	}
}
