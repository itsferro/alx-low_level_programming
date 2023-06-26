#include <stdio.h>

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;
	p = a + 1;
	*p = 98;  
	p2 = a + 3;
	*p2 = *p + 1337;
	printf("a[1]= %d\n", *(a + 1));
	printf("*p + 1337 => 98 + 1337 =>", 98 + 1337, "\n");
	printf("a[3]= %d\n", *(a + 3));
	return (0);
}
