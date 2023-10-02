#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: a string of the path of the file.
 * @text_content: a string of the text that will be added.
 *
 * Return:
 *	1 on success and.
 *	-1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int written_bytes = 0, file_descriptor = 0;
	size_t text_content_len;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_content_len = strlen(text_content);

		write(file_descriptor, text_content, text_content_len);
		if ((written_bytes) == (-1))
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);

	return (1);
}
