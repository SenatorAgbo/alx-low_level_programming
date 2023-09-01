#include "nain.h"
/**
 * binary_to_uint - function that  converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
