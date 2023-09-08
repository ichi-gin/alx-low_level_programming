#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: This program prints all single-digit numbers in base 10.
* Each number is followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;

while (i <= 9)
{
putchar(i + '0'); // Add '0' to convert the integer to its character representation
i++;
}

putchar('\n');

return (0);
}
