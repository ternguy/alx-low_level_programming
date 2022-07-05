#include "main.h"
/**
 * Jack_Bauer -> Prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int q, i;

	for (q = 0; q <= 23; q++)
	{
		for (i = 0; i <= 59; i++)
		{
			_putchar((q / 10) + '0');
			_putchar((q % 10) + '0');
			_putchar(':');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('\n');
		}
	}
}
