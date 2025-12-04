#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer to be added to the new node
 *
 * Return: pointer to the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new_node;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (*h)
	{
		tmp = *h;
		while (i < (idx - 1))
		{
			if (tmp->next)
				tmp = tmp->next;
			else
				return (NULL);
			i++;
		}
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);
		new_node->n = n;
		new_node->next = tmp->next;
		new_node->prev = tmp;
		if (tmp->next)
			tmp->next->prev = new_node;
		tmp->next = new_node;
	}
	else
	{
		return (NULL);
	}

	return (new_node);
}
