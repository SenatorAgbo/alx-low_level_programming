#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to bit
 * @index: index to set the value at bit
 *
 * Return: if an error occurs 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
