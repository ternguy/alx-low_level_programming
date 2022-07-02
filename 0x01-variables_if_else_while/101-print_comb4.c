#include <stdio.h>

/**
 * main - prints 3 combination of numbers
 * Return: always (success)
 */
int main(void)
{
	int c, i, k;

	for (c = '0'; c <= '3'; c++)
	{
		for (i = '0'; i <= '3'; i++)
		{
			for (k = '0'; k <= '3'; k++)
			{
				if (c < i && i < k)
				{
					putchar(c);
					putchar(i);
					putchar(k);
					if (c != '2')
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
