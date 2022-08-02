#include "main.h"

/**
 * read_textfile - Write a function
 * that reads a text file and prints it to the
 * POSIX standard output
 * @filename: file
 * @letters: int number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t read1, write1;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(buffer) * letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	read1 = read(file, buffer, letters);
	if (read1 == -1)
	{
		free(buffer);
		return (0);
	}
	write1 = write(STDOUT_FILENO, buffer, read1);
	if(read1 != write1)
		return (0);
	close(file);
	free(buffer);
	return (write1);
}	

