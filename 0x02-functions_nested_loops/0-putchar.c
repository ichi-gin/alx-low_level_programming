#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints "_putchar" followed by a newline using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char text[] = "_putchar\n";
int i = 0;

while (text[i] != '\0')
{
putchar(text[i]);
i++;
}

return (0);
}
