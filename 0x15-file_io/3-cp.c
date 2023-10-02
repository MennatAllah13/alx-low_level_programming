#include "main.h"

/**
 * closure - close file stream
 * @file: file pointer
 * Return: Void
 */
void closure(int file)
{
	int c = close(file);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * cp - copy file from src to dis
 * @src: source
 * @dist: distenation
 * Return: Always 0.
 */
void cp(char *src, char *dist)
{
	int f_src, f_dist, op = 1024;
	char buffer[BUFFERSIZE];

	f_src = open(src, O_RDONLY);
	if (f_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	f_dist = open(dist, O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0664);
	if (f_dist == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dist);
		closure(f_src);
		exit(99);
	}
	while (op == BUFFERSIZE)
	{
		op = read(f_src, buffer, BUFFERSIZE);
		if (op == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
			exit(98);
		}
		op = write(f_dist, buffer, op);
		if (op == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dist);
			exit(99);
		}
	}
	closure(f_dist);
	closure(f_src);
}

/**
 * main - check the code
 * @argc: number of arg
 * @argv: array of value
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}
