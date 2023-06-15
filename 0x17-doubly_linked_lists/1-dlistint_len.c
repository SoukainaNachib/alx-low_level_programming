#include "lists.h"

/**
 * dlistint_len - returns the Num of elements in a linked dlistint_t list.
 * @h: Pointer to the List.
 * Return: Number of Nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		cont++;
		node = node->next;
	}

	return (cont);
}
