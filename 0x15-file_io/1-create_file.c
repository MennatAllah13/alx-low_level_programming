#include "main.h"

/**
 * create_file - creates a file.
 * @filename: filename
 * @text_content: number of letters it should read and print
 * Return: count of printed char
 */
int create_file(const char *filename, char *text_content)
{
	int file, writer;
	int len = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	while (text_content && text_content[len] != '\0')
		len++;

	writer = write(file, text_content, len);
	if (writer == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
