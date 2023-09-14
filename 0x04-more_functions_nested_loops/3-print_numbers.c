#include "main.h"

/**
 * print_numbers - function that prints all numbers from 0 to 9
 */
int _putchar(char c);
void print_numbers(void)
{
    int number = 48;

    for (number = 48; number < 58; number++)
    {
        _putchar(number);
    }
    _putchar('\n');
}
