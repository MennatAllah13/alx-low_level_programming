#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n, temp;

	while (i <= n / 2 && j >= n / 2)
	{
		temp = a[j];
		a[j] = a[i - 1];
		a[i - 1] = temp;
		i++;
		j--;
	}
}
