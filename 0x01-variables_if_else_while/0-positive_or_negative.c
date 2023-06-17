#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%dis positive\n", n);
	else if (n < 0)
		printf("%dis negative\n", n);
	else
		printf("%dis zero\n", n);
	return (0);
}
