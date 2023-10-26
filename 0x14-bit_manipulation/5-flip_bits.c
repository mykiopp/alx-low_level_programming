#include "main.h"

/**
 * flip_bits - returns the number of bits you would change.
 * @n: first number to be used.
 * @m: second number to be used.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nums;

	for (nums = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nums++;
	}

	return (nums);
}
