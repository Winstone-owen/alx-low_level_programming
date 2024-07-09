#include "main.h"

/**
 * jack_bauer - Prints every minute of the day.
 *
 * Description: Prints every minute of a 24-hour day in the format "HH:MM".
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hours_tens, hours_ones, minutes_tens, minutes_ones, hours_max;

	hours_max = '2'; // Start with hours from '00' to '23'
	hours_tens = '0'; // Initialize tens digit of hours

	while (hours_tens <= '2')
	{
		if (hours_tens == '2')
		{
			hours_max = '3'; // Change maximum hours to '03' to '23'
		}
		hours_ones = '0'; // Initialize ones digit of hours

		while (hours_ones < hours_max)
		{
			minutes_tens = '0'; // Initialize tens digit of minutes

			while (minutes_tens < '6')
			{
				minutes_ones = '0'; // Initialize ones digit of minutes

				while (minutes_ones < '10')
				{
					_putchar(hours_tens);
					_putchar(hours_ones);
					_putchar(':');
					_putchar(minutes_tens);
					_putchar(minutes_ones);
					_putchar('\n');
					minutes_ones++;
				}
				minutes_ones = '0'; // Reset ones digit for next tens digit of minutes
				minutes_tens++;
			}
			minutes_tens = '0'; // Reset tens digit for next hour
			hours_ones++;
		}
		hours_ones = '0'; // Reset ones digit for next tens digit of hours
		hours_tens++;
	}
}
