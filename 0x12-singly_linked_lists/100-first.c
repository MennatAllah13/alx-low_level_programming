#include "lists.h"

/**
 * beforemain - function to be executed before main
 * Return: no return.
 */
void __attribute__((constructor)) beforemain()
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
