#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int temp;

	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
	{
		temp = n;
	}

	if (temp >= 10)
	{
		print_number(temp / 10);
	}
	_putchar(temp % 10 + '0');
}
