#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list
 * @head: pointer to pointer to the head of the list
 * @index: index of the node to be deleted, starting from 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
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
			if (*head)
				(*head)->prev = NULL;
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
