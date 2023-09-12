#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int a = 1, b = 2, temp, sum = 2;

while (1)
{
temp = a + b;

if (temp > 4000000)
break;

if (temp % 2 == 0)
sum += temp;

a = b;
b = temp;
}

printf("%ld\n", sum);

return (0);
}
