#include "main.h"

/**
 * _recursive - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _recursive(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _recursive(s + 1));
}

/**
 * compare - compares each character of the string.
 * @s: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: .
 */
int compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _recursive(s) - 1));
}
