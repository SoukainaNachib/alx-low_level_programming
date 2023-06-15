#include "lists.h"

/**
 * print_dlistint - Prints All the Elements of a dlistint_t list.
 * @h: Pointer to the List.
 * Return: Num of nodes.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		printf("%i\n", node->n);
		cont++;
		node = node->next;
	}

	return (cont);
}
