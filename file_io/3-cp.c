#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>

/**
 * error98 - Print the error for the origin file
 * @file: filename
 */
void error98(char *file)
{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
			exit(98);
}
/**
 * error99 - Print the error for the copy file
 * @file: filename
 */
void error99(char *file)
{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
			exit(99);
}
/**
 * error100 - Print the error when close fails
 * @file: filename
 */
void error100(char *file)
{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file);
			exit(100);
}

/**
	* main - Copy a file with the content
	* @argc: number of arguments
	* @argv: arguments
	* Return: 0 if success
	*/

int main(int argc, char *argv[])
{
	int fl[2], readfile, writefile, closefile;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
	}
	fl[0] = open(argv[1], O_RDONLY);

	if (fl[0] == -1)
		error98(argv[1]);

	fl[1] = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fl[1] == -1)
		error99(argv[2]);

	readfile = read(fl[0], buffer, sizeof(buffer));

	while (readfile > 0)
	{
		writefile = write(fl[1], buffer, readfile);
		if (writefile == -1)
			error100(argv[2]);
		readfile = read(fl[0], buffer, sizeof(buffer));
	}
	if (readfile == -1)
		error98(argv[1]);
	closefile = close(fl[0]);
	if (closefile == -1)
		error100(argv[1]);
	closefile = close(fl[1]);
	if (closefile == -1)
		error100(argv[2]);
	return (0);
}

