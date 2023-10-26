#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: binary as string
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bin;

	bin = (8 * sizeof(n));
	if (index < bin)
		return (((1 << index) & n) >> index);
	return (-1);
}
