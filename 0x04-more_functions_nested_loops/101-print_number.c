#include "main.h"
/**
 * print_number - prints a number stdout.
 * @n: the number to print
 * description: a helper functon that prints a number without a newline
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_number(-n);
		return;
	}
	if (n <= 10)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}
