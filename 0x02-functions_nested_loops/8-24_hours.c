#include "main.h"

/**
 * jack_bauer - Prints every minute of the day.
 *
 * Return: No return value.
 */
void jack_bauer(void)
{
    int hour_tens, hour_units, minute_tens, minute_units;

    for (hour_tens = '0'; hour_tens <= '2'; hour_tens++)
    {
        for (hour_units = '0'; hour_units <= '9'; hour_units++)
        {
            for (minute_tens = '0'; minute_tens <= '5'; minute_tens++)
            {
                for (minute_units = '0'; minute_units <= '9'; minute_units++)
                {
                    _putchar(hour_tens);
                    _putchar(hour_units);
                    _putchar(':');
                    _putchar(minute_tens);
                    _putchar(minute_units);
                    _putchar('\n');
                }
            }
        }
    }
}
