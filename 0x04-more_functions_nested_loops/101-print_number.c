#include "main.h"
/**
 * print_number - prints a number stdout.
 * @n: the number to print
 * description: a helper functon that prints a number without a newline
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
