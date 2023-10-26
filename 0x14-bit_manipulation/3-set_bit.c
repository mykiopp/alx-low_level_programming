#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at an index.
 * @n: pointer of an unsigned long integer to be changed.
 * @index: index of the bit.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
