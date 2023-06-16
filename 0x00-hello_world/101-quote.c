#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1
 */
int main(void)
{
	char message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	unsigned int length = sizeof(message);
	write(2, message, length);
	return (1);
}
