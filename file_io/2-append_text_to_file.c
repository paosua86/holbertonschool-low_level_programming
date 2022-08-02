#include "main.h"

/**
 * append_text_to_file - Write a function that
 * appends text at the end of a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, file_write;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
		file_write = write(file, text_content, strlen(text_content));
	close(file);

	if (file_write == -1)
		return (-1);
	return (1);
}
