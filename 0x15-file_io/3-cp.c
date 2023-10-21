#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * print_error - prints an error to the stderr.
 *
 * @message: the ,essage to print.
 * @file_name: the name of the file related to the error.
 * @exit_code: the code provided on exit for debugging.
 */
void print_error(const char *message, const char *file_name, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, file_name);
	exit(exit_code);
}

/**
 * main - copies the content of a file to another file.
 *
 * @argc: is the arguments count.
 * @argv: is the arguments list.
 *
 * Return:
 *	97 if the number of argument is not the correct one.
 *	98 if file_from does not exist, or if you can not read it.
 *	99 if you can not create or if write to file_to fails.
 *	100 if you can not close a file descriptor.
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to, buffer[BUFFER_SIZE];
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		print_error("Usage: cp file_from file_to", "", 97);

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error("Can't read from file", file_from, 98);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
		print_error("Can't write to", file_to, 99);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			print_error("Can't write to", file_to, 99);
	}

	if (bytes_read == -1)
		print_error("Can't read from file", file_from, 98);

	if (close(fd_from) == -1)
		print_error("Can't close fd", file_from, 100);

	if (close(fd_to) == -1)
		print_error("Can't close fd", file_to, 100);

	return (0);
}
