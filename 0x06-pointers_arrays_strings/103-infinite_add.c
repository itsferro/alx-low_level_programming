#include "main.h"

/**
 * infinite_add - adds two numbers.
 *
 * @n1: a string for nimber one
 * @n2: a string for number two
 * @r: a string for the buffer
 * @size_r: an integer controls the size of the buffer
 *
 * Return: returns a pointer to the result
 * If the result can not be stored in r the function must return 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/* Get lengths of input strings */
	int len1 = 0;
	while (n1[len1] != '\0')
	{
		len1++;
	}
	int len2 = 0;
	while (n2[len2] != '\0')
	{
		len2++;
	}

	/* Determine the length of the result and check if it fits in the output buffer */
	int result_len = len1 > len2 ? len1 + 1 : len2 + 1;
	if (result_len > size_r)
	{
		return 0;
	}

	/* Initialize the result buffer and carry variable */
	int carry = 0;
	int i, j, k;
	for (i = len1 - 1, j = len2 - 1, k = result_len - 1; k >= 0; i--, j--, k--)
	{
		int digit1 = i >= 0 ? n1[i] - '0' : 0;
		int digit2 = j >= 0 ? n2[j] - '0' : 0;
		int digit_sum = digit1 + digit2 + carry;
		carry = digit_sum >= 10 ? 1 : 0;
		r[k] = digit_sum % 10 + '0';
	}

	/* Remove leading zeros from the result */
	int start_index = 0;
	while (r[start_index] == '0' && start_index < result_len - 1)
	{
		start_index++;
	}

	/* Shift the result to the beginning of the output buffer */
	if (start_index > 0)
	{
		result_len -= start_index;
		memmove(r, r + start_index, result_len);
	}

	/* Terminate the result with a null character and return a pointer to it */
	r[result_len] = '\0';
	return r;
}
