#include "main.h"
/**
 * main - check the code
 * return: always (success)
 */

void print_alphabet_x10(void)
{
	int count;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		
		_putchar('\n');
	}
}
