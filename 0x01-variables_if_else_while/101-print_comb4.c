#include <stdio.h>

/**
 * main - prints 3 combination of numbers
 * Return: always (success)
 */
int main(void)
{
	int i, c, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			for (k = '0'; c <= '9'; k++)
			{
				if (i < c && c < k)
				{
					putchar(i);
					putchar(c);
					putchar(k);
					if (i != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
}
