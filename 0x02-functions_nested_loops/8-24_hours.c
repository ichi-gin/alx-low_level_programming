#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
int hour_tens, hour_ones, minute_tens, minute_ones;

for (hour_tens = 0; hour_tens <= 2; hour_tens++)
{
for (hour_ones = 0; hour_ones <= 9; hour_ones++)
{
for (minute_tens = 0; minute_tens <= 5; minute_tens++)
{
for (minute_ones = 0; minute_ones <= 9; minute_ones++)
{
_putchar(hour_tens + '0');
_putchar(hour_ones + '0');
_putchar(':');
_putchar(minute_tens + '0');
_putchar(minute_ones + '0');
_putchar('\n');
}
}
}
}
}
