#include "main.h"

/**
 * create_file - Create a function that creates a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int file, n;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
		{
			write(file, text_content, n);
		}
	}
	else
		write(file, "", 0);

	close(file);
	return (1);
}
