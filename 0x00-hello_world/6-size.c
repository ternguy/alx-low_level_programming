#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("sizeof a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("sizeof an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("sizeof a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("sizeof a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("sizeof a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
