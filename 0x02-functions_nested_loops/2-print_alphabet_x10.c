#include <stdio.h>
/**
 * main - check the code
 * return: always (success)
 */
/**
 * prints 10 times the alphabet, in lowercase, followed by a new line.
 */
int print_alphabet_x10(char, char);
void print_alphabet_x10(void)
{
	int count;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
