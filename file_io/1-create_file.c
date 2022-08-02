#include "main.h"

/**
 * create_file - Create a function that creates a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int file, file_write;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	file_write = write(file, text_content, strlen(text_content));
	close(file);

	if (file_write == -1)
		return (-1);
	return (1);
}
