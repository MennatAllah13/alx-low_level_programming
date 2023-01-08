#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int count = 0;

	while (src[count] != '\0')
	{
		count++;
	}

	for (i = 0; i <= count; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
