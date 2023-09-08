#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to the standard error.
 *
 * Return: Always 1 (Exit with error)
 */
int main(void)
{
    char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, str, 59);
    return (1);
}
