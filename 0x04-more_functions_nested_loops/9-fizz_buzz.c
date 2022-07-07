#include <stdio.h>
/**
 * main - entry point
 * Return: void
 */
int main(void)
{
	int p = 100;
	int i;


	i = 1;
	while (i <= p)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			_putchar("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i < p)
			{
				_putchar("Buzz ");
			}
			else
			{
				_putchar("Buzz ");
			}
			else
			{
				_putchar("%i ", i);
			}
		}
		i++;
	}
	_putchar("\n");
	return (0);
}
