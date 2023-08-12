#include "main.h"

/**
 * read_textfile - reads a text file
 *	and prints it to the POSIX standard output.
 *
 * @filename: a pointer to the file.
 * @letters: the number of letters to print.
 *
 * Return:
 *	actual number of letters it could read and print.
 *	if the file can not be opened or read, return 0
 *	if filename is NULL return 0
 *	if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	long int letters_read = 0, letters_written = 0;
	int file_descriptor = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	letters_read = read(file_descriptor, buffer, letters);
	if ((letters_read) == (-1))
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	letters_written = write(STDOUT_FILENO, buffer, letters_read);
	if ((letters_written) == (-1) || letters_written != letters_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	close(file_descriptor);
	free(buffer);
	return (letters_read);
}
