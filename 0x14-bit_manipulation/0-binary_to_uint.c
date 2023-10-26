#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer.
 * @b: containing binary number.
 *
 * Return: unsigned integer number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ab = 0;
	int i, b_two;

	if (!b)
		return (0);


	for (i = 0; b[i]; i++)
		;

	for (i--, b_two = 1; i >= 0; i--, b_two *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] & 1)
		{
			ab += b_two;
		}
	}

	return (ab);
}
