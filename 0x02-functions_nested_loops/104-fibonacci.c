#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int a = 1, b = 2, temp;
int count;

printf("%lu", a);

for (count = 1; count < 98; count++)
{
printf(", %lu", b);
temp = a + b;
a = b;
b = temp;
}

printf("\n");

return (0);
}
