#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: This program prints the alphabet in lowercase, followed by
* the alphabet in uppercase, each followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}

while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}

putchar('\n');

return (0);
}
