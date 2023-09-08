#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char digit = '0';

while (digit <= '9')
{
putchar(digit);
digit++;
}

char lowercaseLetter = 'a';

while (lowercaseLetter <= 'f')
{
putchar(lowercaseLetter);
lowercaseLetter++;
}

putchar('\n');

return (0);
}
