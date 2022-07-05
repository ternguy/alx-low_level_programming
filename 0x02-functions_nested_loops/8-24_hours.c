#include "main.h"
/**
 * Jack_Bauer - print 24 hours of the day starting from minutes, then hours
 * return: aways (success)
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
