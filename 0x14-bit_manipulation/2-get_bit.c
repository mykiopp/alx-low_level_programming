#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index in a decimal number.
 * @n: unsigned long integer input to be searched.
 * @index: index of the bit.
 *
 * Return: value of the bit or -1 if error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k;
	
	if (index > 63)
		return (-1);

	for (k = 0; k <= 63; n >>= 1, k++)
	{
		if (index == k)
		{
			return (n & 1);
		}
	}
	return (0);
}
