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
        int hours_tens, hours_ones, minutes_tens, minutes_ones;

        hours_tens = '0'; /* Initialize tens digit of hours */

        while (hours_tens <= '2')
        {
                hours_ones = '0'; /* Initialize ones digit of hours */

                while (hours_ones <= '9')
                {
                        minutes_tens = '0'; /* Initialize tens digit of minutes */

                        while (minutes_tens <= '5')
                        {
                                minutes_ones = '0'; /* Initialize ones digit of minutes */

                                while (minutes_ones <= '9')
                                {
                                        _putchar(hours_tens);
                                        _putchar(hours_ones);
                                        _putchar(':');
                                        _putchar(minutes_tens);
                                        _putchar(minutes_ones);
                                        _putchar('\n');
                                        minutes_ones++;
                                }
                                minutes_tens++;
                                minutes_ones = '0'; /* Reset ones digit for next tens digit of minutes */
                        }
                        hours_ones++;
                        minutes_tens = '0'; /* Reset tens digit for next hour */
                }
                hours_tens++;
                hours_ones = '0'; /* Reset ones digit for next tens digit of hours */
        }
}
