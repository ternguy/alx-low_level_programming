#include <stdio.h>
/**
 * main - entry point
 * Return: void
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
		if (x == 100)
			printf("Buzz");
	{
		else if (x % 3 == 0 && x % 5 == 0)
		{
			prinf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
			printf("Buzz ")
		else
			printf("%d ", x);
	}
	printf("\n");
}
