#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename
 * @text_content: number of letters it should read and print
 * Return: count of printed char
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, writer;
	int len = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);

	if (!text_content)
		return (1);

	while (text_content[len] != '\0')
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
