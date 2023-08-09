#include "main.h"

/**
 * create_file - creates a file.
 *
 * @filenamr: the file name string.
 * @text_content: a string holds the text
 *	that will be written in  to the file.
 *
 * Return: 1 on success, -1 on failure
 *	(file can not be created, file can not be written,
 *	write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor = 0;
	size_t content_length, bytes_written;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename,
			O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		content_length = strlen(text_content);
		bytes_written = write(file_descriptor, text_content, content_length);
		if (bytes_written != content_length)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
