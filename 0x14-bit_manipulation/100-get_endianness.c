#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	int num = 1;
	char *c = (char *) &i;

	if (*c == 1)
		return (1);

	return (0);
}
