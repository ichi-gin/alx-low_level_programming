#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: If the result can be stored in r, return the pointer to r.
 *         Otherwise, return 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry = 0;

	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;

	if (i > size_r || j > size_r)
		return (0);

	r[size_r--] = '\0';
	i--;
	j--;

	while (i >= 0 || j >= 0 || carry)
	{
		int num1 = (i >= 0) ? n1[i--] - '0' : 0;
		int num2 = (j >= 0) ? n2[j--] - '0' : 0;
		int sum = num1 + num2 + carry;

		carry = sum / 10;
		r[size_r--] = (sum % 10) + '0';
	}

	return (r + size_r + 1);
}
