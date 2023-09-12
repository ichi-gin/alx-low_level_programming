#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int a = 1, b = 2, temp;
int i;

printf("%ld, %ld", a, b);

for (i = 2; i < 50; i++)
{
temp = a + b;
printf(", %ld", temp);
a = b;
b = temp;
}

printf("\n");
return (0);
}
