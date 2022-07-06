#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * test_positive_or_negative -> test positive or negative,
 *  when given a case of zero
 */
void positive_or_negative(int i)
{
	 int n;

	 srand(time(0));

	n = i;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
/**
 * main - debuggging example
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);
	return (0);
}
