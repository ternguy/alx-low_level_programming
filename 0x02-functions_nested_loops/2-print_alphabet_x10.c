#include "main.h"
/**
 * print_alphabet -> print the lower case alphabet
 */

void print_alphabet_x10(void)
{
	int p;
	int j;

	for (j = 0; j < 10; j++)
	{

		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}

	_putchar('\n');

	}
}
