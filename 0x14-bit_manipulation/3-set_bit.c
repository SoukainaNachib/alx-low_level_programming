#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: integer
 * @index: index to set 1
 * Return: integer
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int y;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	y = 1;
	*n = *n | (y << index);

	return (1);
}
